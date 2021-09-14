#include "calc_proc_oop.h"

//-------
int calc_action_plus(int OperandX, int OperandY)
{
    return OperandX+OperandY;
}
//---------
int calc_action_sb(int OperandX, int OperandY)
{
    return OperandX-OperandY;
}
//-------
int calc_action_mult(int OperandX, int OperandY)
{
    return OperandX*OperandY;
}
//------
int calc_action_div(int OperandX, int OperandY)
{
    if (OperandY==0)
    {
        cout<<"Is Ziro dev ! Do not action and wrong result!";
        return 1;
    } else 
        return OperandX/OperandY;
}
//--------
void calc_action(){
     int OperandX, OperandY,Rezult, Continue;
    char Operator;
    int Result;
    do{
        cout << "Please, input arifm. operator(+,-,*,/): "<< endl;
        cin >> Operator;

        cout << "Please, input first Operand"<< endl;
        cin >> OperandX;

        cout << "Please, input second Operand"<< endl;
        cin >> OperandY;

            if (Operator=='+'){Rezult=calc_action_plus(OperandX,OperandY);}

            else if (Operator=='-'){Rezult=calc_action_sb(OperandX,OperandY);}

            else if (Operator=='*'){Rezult=calc_action_mult(OperandX,OperandY);}

            else if (Operator=='/'){Rezult=calc_action_div(OperandX,OperandY);}

        cout << "Result is "<<Rezult<<endl;
        cout << "For continue put 1 ";
        cin >>Continue;
        }while(Continue==1);

        cout << "Program has finished. Put any key";
        cin >>Continue;
        return;
}