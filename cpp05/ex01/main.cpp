#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bureau1("Jess", 2);
        Bureaucrat bureau2("Diane", 130);
        Form form1 = Form("formOne", 130, 2);
        Form form2 = Form("formTwo", 10, 1);

        std::cout << std::endl;
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
        bureau1.promo();
        bureau2.promo();
        std::cout << std::endl;
        form2.beSign(bureau1);
        std::cout << std::endl;
        bureau1.signForm(form2);
        std::cout << std::endl;
        bureau2.signForm(form1);
        std::cout << std::endl;
        bureau2.signForm(form2);
        std::cout << std::endl;
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
        std::cout << bureau1.getName() << " " << bureau1.getGrade() << std::endl;
        std::cout << bureau2.getName() << " " << bureau2.getGrade() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }


    return 0;
}
