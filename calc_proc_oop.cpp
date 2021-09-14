#include "calc_proc_oop.h"

void main_calc()
{
int OperandX, OperandY,Rezult, Continue;
    char Operator;
  do{
    cout << "Please, input arifm. operator(+,-,*,/): "<< endl;
    cin >> Operator;

    cout << "Please, input first Operand"<< endl;
    cin >> OperandX;

    cout << "Please, input second Operand"<< endl;
    cin >> OperandY;

        if (Operator=='+'){Rezult=main_action_add(int OperandX, int OperandY);}

        else if (Operator=='-'){Rezult=main_action_sub(int OperandX, int OperandY);}

        else if (Operator=='*'){Rezult=main_action_mult(int OperandX, int OperandY);}

        else if (Operator=='/'){Rezult=main_action_dev(int OperandX, int OperandY);}

    cout << "Result is "<<Rezult<<endl;
    cout << "For continue put 1 ";
    cin >>Continue;
    }while(Continue==1);

    cout << "Program has finished. Put any key";
    cin >>Continue;
}
void main_action_add(int OperandX, int OperandY)
{
    return(OperandX+OperandY);
}
void main_action_sub(int OperandX, int OperandY)
{
    return(OperandX-OperandY);
}
void main_action_mult(int OperandX, int OperandY)
{
    return(OperandX*OperandY);
}
void main_action_dev(int OperandX, int OperandY)
{
    return(OperandX/OperandY);
}
