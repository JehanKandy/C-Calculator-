#include <iostream>

using namespace std;

int main()
{




    double n1, n2, result;
    char op;
    printf("C++ calculator BY::JEHANKANDY \n\n" );

    do{

        printf(" enter 'F' to exit \n\n\n" );
        cout << "Enter Opertaor : (+,-,/,*) : ";
        cin >> op;

        cout << "Enter first Number :";
        cin >> n1;

        cout << "Enter Secound Number :";
        cin >> n2;







        if(op == '+'){
            result = n1 + n2;
            cout << "Total is : " << result;
            return 0;
        }
        else if(op == '-'){
            result = n1 - n2;
            cout << "Sub is : " << result;
        }

        else if(op == '/'){
            if(n1 == 0){
                cout << "Connot Divied By Zero";
            if(n2 == 0){
                 cout << "Connot Divied By Zero";
            }else
                result = n1 / n2;
                cout << "Divition is : " << result;
            }}

        else if(op == '*'){
            result = n1 * n2;
            cout << "Product is : " << result;
        }
        else{
            cout << "Invailed Operator ";
        }

        cout << "\n \n-------------------------------- \n \n";


        }while (op != 'F');
        cout << "***************** Thank you for using my calculator ********************* \n\n";
        return 0;
    }












