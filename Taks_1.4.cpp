/**
    Author: ������ ������
    Group: ��� 001-�-001 / 1
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
        cout << "������� ����� ������ � ��������:";
        Input_validation = scanf ("%lf", &time);
        if(Input_validation != 1){
            printf("Input error: input value is not a number\n");
            getchar();
        }
    }while(Input_validation != 1);
    cout << "\n";

    double Height_from_the_bottom = Speed*time*cos(alfa);
    Height_from_the_bottom = Height_from_the_bottom > 0 ? Height_from_the_bottom*1 : Height_from_the_bottom*-1;

    double Destance_from_edge_to_cliff = Height + Height_from_the_bottom - (9.81*time*time)/2;
    Destance_from_edge_to_cliff = Destance_from_edge_to_cliff > 0 ? Destance_from_edge_to_cliff*1 : Destance_from_edge_to_cliff*-1;

    cout << "������ �� ��� ������ = " << Height_from_the_bottom << "\n""���������� �� ���� ������ = " << Destance_from_edge_to_cliff << "\n";
    return 0;
}
