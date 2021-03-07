/**
    Author: Ботвин Степан
    Group: СБС 001-О-001 / 1
    Taks#: 2.4
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    setlocale(LC_ALL, "Rus");

    double x, Sum = 0;
    const int n = 10;
    bool Input_validation;
    do{
        do{
            cout << "Введите число  в диапазоне (-1,1):";
            Input_validation = scanf ("%lf", &x);
            if(Input_validation != 1){
                cout << "Ошибка ввода: введена буква" << endl;
                cin.ignore(getchar(), '\n');
            }
        }while(Input_validation != 1);
        if(abs(x) > 1)
            cout << "Ошибка ввода: неверный диапазон значения" << endl;
    }while(abs(x) > 1);

    for(int i = 0; i < n; i++){
        Sum += pow(-1,i)*(i+1)*pow(x,i);
    }
    cout << "1-2*" << x << "+3*" << x << "^2-4*" << x << "^3+...=" << Sum << endl;
    return 0;
}
