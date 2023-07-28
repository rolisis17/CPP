#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ctime>
#include <cstdlib>

int main()
{
    Bureaucrat bureau1;
    Bureaucrat bureau2;
    std::srand(static_cast<unsigned int>(std::time(0)));
    // Form form1;
    // Form form2;

    try
    {
        bureau1 = Bureaucrat("Jess", 2);
        bureau2 = Bureaucrat("Diane", 130);
        AForm* form1 = new PresidentialPardonForm("Cunt");
        AForm* form2 = new RobotomyRequestForm("Cunt");
        AForm* form3 = new ShrubberyCreationForm("Cunt");

        bureau1.promo();
        bureau2.promo();
        // form2->beSign(bureau1);
        bureau1.signForm(*form2);
        bureau1.signForm(*form1);
        bureau2.signForm(*form2);
        bureau2.signForm(*form3);
        AForm* form4;
        form4 = form1;
        bureau1.executeForm(*form1);
        bureau1.executeForm(*form4);
        bureau1.executeForm(*form2);
        bureau2.executeForm(*form3);
        
 
        std::cout << bureau1.getGrade() << std::endl;
        std::cout << bureau2.getGrade() << std::endl;

        delete form1;
        delete form2;
        delete form3;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }

    return 0;
}
