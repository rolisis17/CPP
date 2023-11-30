#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bureau1;
    Bureaucrat bureau2;
    Bureaucrat bureau3;
    Bureaucrat bureau4;
    Bureaucrat bureau5;
    try
    {
        bureau1 = Bureaucrat("Antonio", 20);
        bureau2 = Bureaucrat("Ed", 120);
        bureau3 = Bureaucrat("Rose", 70);
        bureau4 = Bureaucrat("Jess", 2);
        bureau5 = Bureaucrat("Diane", 150);

        bureau1.promo();
        bureau2.promo();
        bureau3.promo();
        bureau4.promo();
        bureau5.degrade();

        std::cout << bureau1.getGrade() << std::endl;
        std::cout << bureau2.getGrade() << std::endl;
        std::cout << bureau3.getGrade() << std::endl;
        std::cout << bureau4.getGrade() << std::endl;
        std::cout << bureau5.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }

    return 0;
}