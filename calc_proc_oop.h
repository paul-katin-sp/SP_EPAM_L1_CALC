#include <iostream>
using namespace std;
//============================================================================
// Name        : main for EPAM calk
// Authors     : Paul Katin and [1]
// Version     : 0.1
// Copyright   : MIT
// Description : Calk. first stage   C++! Proc implam in CPP tuls For lect.1
// Created on  :  0.1 ed. 14.09  2021 г
//============================================================================
#include <iostream>
using namespace std;

void main_calc();
void main_action_add(int OperandX, int OperandY);
void main_action_sub(int OperandX, int OperandY);
void main_action_mult(int OperandX, int OperandY);
void main_action_dev(int OperandX, int OperandY);


int main(int argc, char * argv []){
    int OperandX, OperandY,Rezult, Continue;
    char Operator;
  do{
    cout << "Please, input arifm. operator(+,-,*,/): "<< endl;
    cin >> Operator;

    cout << "Please, input first Operand"<< endl;
    cin >> OperandX;

    cout << "Please, input second Operand"<< endl;
    cin >> OperandY;

        if (Operator=='+'){Rezult=OperandX+OperandY;}

        else if (Operator=='-'){Rezult=OperandX-OperandY;}

        else if (Operator=='*'){Rezult=OperandX*OperandY;}

        else if (Operator=='/'){Rezult=OperandX/OperandY;}

    cout << "Result is "<<Rezult<<endl;
    cout << "For continue put 1 ";
    cin >>Continue;
    }while(Continue==1);

    cout << "Program has finished. Put any key";
    cin >>Continue;
    }
© 2021