#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <string>

class RPN
{
	private:
		RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
        std::stack<double> operandStack;
		int evaluate(const std::string& expression);
		bool isOperand(const std::string& token);
		bool isOperator(const std::string& token);
		double performOperation(double operand1, double operand2, const std::string& op);

	public:
		RPN(std::string& math);
		~RPN();
};

#endif