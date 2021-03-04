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
    
    do{
        do{
            cout << "Введите время полета в секундах:";
            Input_validation = scanf ("%lf", &time);
            if(Input_validation != 1){
                cout << "Ошибка ввода: введена буква";
                getchar();
            }
        }while(Input_validation !=   1);
            cout << "Ошибка ввода: введено отрицательное число"
    }while(time<0);
    cout << "\n";

    double Height_from_the_bottom = Speed*time*cos(alfa);
    Height_from_the_bottom = Height_from_the_bottom > 0 ? Height_from_the_bottom*1 : Height_from_the_bottom*-1;

    double Destance_from_edge_to_cliff = Height + Speed*time*sin(alfa) - (9.8*time*time)/2;
    Destance_from_edge_to_cliff = Destance_from_edge_to_cliff > 0 ? Destance_from_edge_to_cliff*1 : Destance_from_edge_to_cliff*-1;

    cout << "Высота от дна обрыва = " << Height_from_the_bottom << "\n""Расстояние до края обрыва = " << Destance_from_edge_to_cliff << "\n";
    return 0;
}
