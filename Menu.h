#pragma once
#include <iostream>
#include "Password.h"

using namespace std;

class Menu
{
    private:
        int punkt;

    public:
        void run_menu()
        {
            cout << "Добро пожаловать!\n";
            cout << "Вход\n";
            cout << "Регистрация\n";

            cin >> punkt;

            if (punkt == 1)
            {
                Password pass;
                pass.Entrance();
            }    
            else if (punkt == 2)
            {       
                Password pass;
                pass.Sign_up();
            }        
            else            
            {
                cout << "Не верный пункт меню!\n";

            }
        }
};
