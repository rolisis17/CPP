#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
    // Bureaucrat bureau1;
    // Bureaucrat bureau2;
    std::srand(static_cast<unsigned int>(std::time(0)));
    Intern intern1 = Intern();

    try
    {
        std::cout << std::endl;
        Bureaucrat bureau1("Jess", 2);
        std::cout << std::endl;
        Bureaucrat bureau2("Diane", 130);
        std::cout << std::endl;
        AForm* form1 = &intern1.makeForm("presidential pardon", "Cunt");
        std::cout << std::endl;
        AForm* form2 = &intern1.makeForm("robotomy request", "Cunt");
        std::cout << std::endl;
        AForm* form3 = &intern1.makeForm("shrubbery creation", "Cunt");

        std::cout << std::endl;
        bureau1.promo();
        std::cout << std::endl;
        bureau2.promo();
        std::cout << std::endl;
        // form2->beSign(bureau1);
        bureau1.signForm(*form2);
        std::cout << std::endl;
        bureau1.signForm(*form1);
        std::cout << std::endl;
        bureau2.signForm(*form2);
        std::cout << std::endl;
        bureau2.signForm(*form3);
        std::cout << std::endl;
        AForm* form4;
        form4 = form1;
        std::cout << std::endl;
        bureau1.executeForm(*form1);
        std::cout << std::endl;
        bureau1.executeForm(*form4);
        std::cout << std::endl;
        bureau1.executeForm(*form2);
        std::cout << std::endl;
        bureau2.executeForm(*form3);
        
        std::cout << std::endl;
        // bureau1.promo();
 
        std::cout << bureau1.getGrade() << std::endl;
        std::cout << std::endl;
        std::cout << bureau2.getGrade() << std::endl;
        std::cout << bureau1 << std::endl;

        std::cout << bureau1 << std::endl;
        std::cout << std::endl;
        delete form1;
        std::cout << std::endl;
        delete form2;
        std::cout << std::endl;
        delete form3;
        std::cout << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }

    return 0;
}
