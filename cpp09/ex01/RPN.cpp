#include "RPN.hpp"
#include <iostream>
#include <sstream>

RPN::RPN(std::string& math){
	evaluate(math);
}

int RPN::evaluate(const std::string& expression) {
	std::stack<double> operandStack;

	std::istringstream iss(expression);
	std::string token;

	while (iss >> token) {
		if (isOperand(token)) {
			std::istringstream ss(token);
			int nbr = 0;
			ss >> nbr;
			if (nbr > 9) {
				std::cerr << "Error: number too large: " << token << std::endl;
				return 1;
			}
			operandStack.push(nbr);
		} else if (isOperator(token)) {
			if (operandStack.size() < 2) {
				std::cerr << "Error: Insufficient operands for operator " << token << std::endl;
				return 1;
			}

			double operand2 = operandStack.top();
			operandStack.pop();

			double operand1 = operandStack.top();
			operandStack.pop();

			double result = performOperation(operand1, operand2, token);
			operandStack.push(result);
		} else {
			std::cerr << "Error: Invalid token encountered: " << token << std::endl;
			return 1;
		}
	}

	if (operandStack.size() != 1) {
		std::cerr << "Error: Incomplete expression" << std::endl;
		return 1;
	}

	std::cout << operandStack.top() << std::endl;
	return 0;
}

bool RPN::isOperand(const std::string& token) {
	return (token.find_first_not_of("0123456789") == std::string::npos);
}

bool RPN::isOperator(const std::string& token) {
	return (token == "+" || token == "-" || token == "*" || token == "/");
}

double RPN::performOperation(double operand1, double operand2, const std::string& op) {
	if (op == "+") {
		return operand1 + operand2;
	} else if (op == "-") {
		return operand1 - operand2;
	} else if (op == "*") {
		return operand1 * operand2;
	} else if (op == "/") {
		if (operand2 == 0) {
			std::cerr << "Error: Division by zero" << std::endl;
			return 0;
		}
		return operand1 / operand2;
	} else {
		std::cerr << "Error: Unknown operator " << op << std::endl;
		return 0;
	}
}

RPN::~RPN(){}