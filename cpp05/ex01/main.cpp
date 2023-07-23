#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat bureau1;
    Bureaucrat bureau2;
    // Form form1;
    // Form form2;

    try
    {
        bureau1 = Bureaucrat("Jess", 2);
        bureau2 = Bureaucrat("Diane", 130);
        Form form1 = Form("formOne", 130, 2);
        Form form2 = Form("formTwo", 10, 1);

        bureau1.promo();
        bureau2.promo();
        bureau1.signForm(form1);
        bureau1.signForm(form1);
 
        std::cout << bureau1.getGrade() << std::endl;
        std::cout << bureau2.getGrade() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }


    return 0;
}
