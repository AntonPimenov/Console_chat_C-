#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//класс пароль

class Password
{
    private:

        string login = "login.txt";
        string password = "password.txt";
        string log_cheker;                  //переменная хранения для логина
        string pass_cheker;                 //переменная хранения для пароля
        string log_correct;                 //перемнная для проверки логина
        string pass_correct;                //переменная для проверки пароля

    public:
        void Entrance()  //функция входа
        {
            login = "login.txt";
            password = "password.txt";

            fstream log;
            fstream pass;
            log.open(login, fstream::in | fstream::out | fstream::app);
            pass.open(password, fstream::in | fstream::out | fstream::app);
            if (!log.is_open() && !pass.is_open())
            {
                cout << "Ошибка!" << endl;
            }
            else
            {
                log_cheker;
                pass_cheker;
            }
            //считываем данные из файлов
            while(!log.eof())
            {
                log_cheker = "";
                log >> log_cheker;

            }
            while(!pass.eof())
            {
                pass_cheker = "";
                pass >> pass_cheker;
            }

            

            cout << "Введите свой логин: "; cin >> log_correct;
            cout << endl;
            cout << "Введите свой пароль: "; cin >> pass_correct;
            
            if (log_correct != log_cheker && pass_correct != pass_cheker)
            {
                cout << "Пароль или логин не совпадают!" << endl;
            }
            else
            {
                cout << "Данные корректны." << endl;
            }
        }
        void Sign_up()   //функция регистрации
        {
            login = "login.txt";
            password = "password.txt";

            fstream log;
            fstream pass;

            //логика открытия/создание файла
            log.open(login, fstream::in | fstream::out | fstream::app);
            pass.open(password, fstream::in | fstream::out | fstream::app);

            //проверка на создание/открытие файла
            if(!log.is_open() && !pass.is_open())
            {
                cout << "Ошибка!" << endl;
            }
            else
            {
                log_cheker;      //переменная для логина
                pass_cheker;     //переменная для пароля
                cout << "Введите логин: "; cin >> log_cheker;
                cout << "Введите пароль: "; cin >> pass_cheker;

                //запись данных в файлы
                log << log_cheker;      
                pass << pass_cheker;
                cout << "Регистрация прошла успешна!" << endl;
            }


        }
};