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
    Bureaucrat bureau1;
    Bureaucrat bureau2;
    std::srand(static_cast<unsigned int>(std::time(0)));
    Intern intern1 = Intern();
    AForm *form1;
    AForm *form2;
    AForm *form3;

    try
    {
        std::cout << std::endl;
        bureau1 = Bureaucrat("Jess", 2);
        std::cout << std::endl;
        bureau2 = Bureaucrat("Diane", 130);
        std::cout << std::endl;

        form1 = intern1.makeForm("presidential pardon", "Hazzor5");
        std::cout << std::endl;
        form2 = intern1.makeForm("robotomy request", "Ariane");
        std::cout << std::endl;
        form3 = intern1.makeForm("shrubbery creation", "~e~");
        std::cout << std::endl;
        RobotomyRequestForm form44("Cnt223");

        std::cout << std::endl;
        bureau1.promo();
        std::cout << std::endl;
        bureau2.promo();
        std::cout << std::endl;

        form2->beSign(bureau1);
        // bureau1.signForm(*form2); // different way to sign a form
        std::cout << std::endl;
        bureau1.signForm(*form1);
        std::cout << std::endl;
        bureau2.signForm(*form2);
        std::cout << std::endl;
        bureau2.signForm(*form3);
        std::cout << std::endl;
        AForm *form4;
        form4 = form1;
        std::cout << *form4 << std::endl;
        std::cout << std::endl;

        bureau1.executeForm(*form1);
        std::cout << std::endl;
        bureau1.executeForm(*form4);
        std::cout << std::endl;
        bureau1.executeForm(*form2);
        std::cout << std::endl;
        bureau1.executeForm(*form3);
        
        std::cout << std::endl;
        // bureau1.promo(); // grade too high
 
        std::cout << bureau1.getGrade() << std::endl;
        std::cout << std::endl;
        std::cout << bureau2.getGrade() << std::endl;
        std::cout << bureau1 << std::endl << std::endl;

        // std::cout << bureau1 << std::endl;
        std::cout << *form3 << std::endl;
        std::cout << form44 << std::endl;
        std::cout << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    delete form1;
    std::cout << std::endl;
    delete form2;
    std::cout << std::endl;
    delete form3;
    std::cout << std::endl;

    return 0;
}
