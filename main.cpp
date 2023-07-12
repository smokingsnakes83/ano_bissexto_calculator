#include <iostream>

int main()
{
    int year;
    char op = 'y';

    while (op == 'y' || op == 'Y')
    {

        std::cout << "Digite o ano: ";
        std::cin >> year;

        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            std::cout << '\n';
            std::cout << year << " É um ano bissexto" << '\n';
            std::cout << '\n';
        }
        else
        {   
            std::cout << '\n';
            std::cout << year << " Não é um ano bissexto" << '\n';
            std::cout << '\n';
        }

        std::cout << "Deseja verificar outro ano? y[YES] n[NO]: ";
        std::cin >> op;

        while (op != 'y' && op != 'n')
        {
            if (op != 'y' && op != 'n')
            {
                std::cout << "[" << op << "]  Opção inválida!" << '\n';
                std::cout << '\n';
                std::cout << "Deseja verificar outro ano? y[YES] n[NO]: ";
                std::cin >> op;
            }
        }
    }
    return 0;
}
