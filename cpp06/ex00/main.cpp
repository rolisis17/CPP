#include <iostream>
#include <string>

// void printType(const std::string& input) {
//     try {
//         // Try converting to char
//         if (input.length() == 1)
//         {
//             char c = static_cast<char>(input[0]);
//             if (std::isprint(c)) {
//                 std::cout << "Char: " << c << std::endl;
//                 // return;
//             }
//             else
//             {
//                 std::cout << "is not printble" << std::endl;
//             }
//         }
//     } catch (const std::invalid_argument&) {
//         // Not convertible to char
//     } catch (const std::out_of_range&) {
//         // Not convertible to char due to out-of-range value
//     }

//     try {
//         // Try converting to int
//         int i = static_cast<int>(input);
//         std::cout << "Int: " << i << std::endl;
//         // return;
//     } catch (const std::invalid_argument&) {
//         // Not convertible to int
//     } catch (const std::out_of_range&) {
//         // Not convertible to int due to out-of-range value
//     }

//     try {
//         // Try converting to float
//         float f = std::stof(input);
//         std::cout << "Float: " << f << std::endl;
//         // return;
//     } catch (const std::invalid_argument&) {
//         // Not convertible to float
//     } catch (const std::out_of_range&) {
//         // Not convertible to float due to out-of-range value
//     }

//     try {
//         // Try converting to double
//         double d = std::stod(input);
//         std::cout << "Double: " << d << std::endl;
//         // return;
//     } catch (const std::invalid_argument&) {
//         // Not convertible to double
//     } catch (const std::out_of_range&) {
//         // Not convertible to double due to out-of-range value
//     }

//     std::cout << "Error: Invalid input format." << std::endl;
// }

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::cin >> input;

    ScalarConverter::convert(input);

    return 0;
}