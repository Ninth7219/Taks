/**
    Author: Ботвин Степан
    Group: СБС 001-О-001 / 1
    Taks#: 1.4
*/

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int k)
{
  if (k==0) return 1;
  else return k*factorial(k-1);
}

int input(){
    int x;
    bool Input_validation;
    do{
        cout << "Введите число:";
        Input_validation = scanf ("%d", &x);
        if(!Input_validation){
            cout << "Ошибка ввода: введена буква" << endl;
            cin.ignore(getchar(), '\n');
        }
    }while(!Input_validation);
    return x;
}

double res(int n, int x){
    double res;
    for(int i=0; i <= n ;i++){
        res+= pow(x,i)/factorial(i);
    }
    return res;
}

int main(){

    setlocale(LC_ALL, "Rus");

    int x = input();
    const int n = 12;
    double exp_x = res(n,x);

    cout << exp_x << endl;
    return 0;
}
