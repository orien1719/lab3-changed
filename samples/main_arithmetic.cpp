// реализация пользовательского приложения

#include "arithmetic.h"

int main()
{
    try
   {
        Arithmetic a1;
        cout << "Write your expression:" << endl;
        string str;
        getline(cin, str);
        cout << "Expression is after translting to string: " << endl;
        a1.translateStrToTerm(str);
         a1.PrintVecT();
         cout << "Polish Note: " << endl;
        a1.TermToPolishNote();
        a1.PrintVectP();
        cout << "Result expression: " << endl;
        a1.calculate();
    }
    catch (char* error) 
    {
        cout << error << endl;
    }
}
