/**
    Author: Ботвин Степан
    Group: СБС 001-О-001 / 1
    Taks#: 1.4
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    setlocale(LC_ALL, "Rus");

    const double Speed=9, Height=15, alfa=35;
    double time;
    bool Input_validation;

    double Time_flight = ((Speed*sin(alfa))/9,8)*(1 + (sqrt(1 + (2*9,8*Height)/pow(Speed, 2)*pow(sin(alfa), 2))));
    
    do{
        do{
            do{
                cout << "Введите время полета в секундах:";
                Input_validation = scanf ("%lf", &time);
                if(Input_validation != 1){
                    cout << "Ошибка ввода: введена буква" << endl;
                    cin.ignore(getchar(), '\n');
                }
            }while(Input_validation != 1);
            if(time < 0)
                cout << "Ошибка ввода: введено отрицательное число" << endl;
        }while(time < 0);
        if(time >Time_flight)
            cout << "Ошибка ввода: введёное время превышает время полёта камня" << endl;
    }while(time > Time_flight);
    cout << "\n";

    double Cliff_height = Speed*time*cos(alfa);
    Cliff_height = Cliff_height > 0 ? Cliff_height*1 : Cliff_height*-1;

    double Destance_cliff = Height + Speed*time*sin(alfa) - (9.8*time*time)/2;
    Destance_cliff = Destance_cliff > 0 ? Destance_cliff*1 : Destance_cliff*-1;

    cout << "Высота от дна обрыва = " << Cliff_height << endl
         << "Расстояние до края обрыва = " << Destance_cliff << endl
         << "Время полёта камня = " << Time_flight << endl;
    return 0;
}
