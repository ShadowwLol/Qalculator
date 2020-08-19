#include <iostream>
#include <cmath>
using namespace std;

void mancalq(double nm1, double nm2);
double calq(double num1,double num2, char op);


int main()
{
    double n1, n2 = 0.0;
    int choose;
    double fnum, snum = 0.0;
    char oper;
    char choice;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "_____   M Y   C A L C U L A T O R   _____" << endl;
    cout << endl;
    cout << "Press 1 for automatic calculator." << endl;
    cout << "Press 2 for manual calculator" << endl;
    cout << endl;
    cout << "> ";
    cin >> choose;
    switch(choose){
    case 1:
        cout << endl;
        cout << "Enter first number" << endl;
        cout << "> ";
        cin >> n1;
        cout << endl;
        cout << "Enter second number" << endl;
        cout << "> ";
        cin >> n2;
        cout << endl;
        cout << endl;
        mancalq(n1, n2);

        break;
    case 2:
        goto startman;
        break;
    default:
        cout << "Error, invalid choice." << endl;
        main();
        break;
    }
    startman: cout << endl;
    cout << "Enter first number" << endl;
    cout << "> ";
    cin >> fnum;
    cout << endl;
    cout << "Enter operator" << endl;
    cout << "> ";
    cin >> oper;
    cout << endl;
    cout << "Enter second number" << endl;
    cout << "> ";
    cin >> snum;
    cout << endl;
    cout << "Press Q to quit or press Y to continue" << endl;
    cout << "> ";
    cin >> choice;
    cout << endl;
    while (choice != 'q'){
        calq(fnum, snum, oper);
        main();
    }
    system("PAUSE");
    return 0;
}

void mancalq(double nm1, double nm2){
    cout << endl;
    cout << "Addition: " << nm1 << " + " << nm2 << " = " << nm1+nm2 << endl;
    cout << "Subtraction: " << nm1 << " - " << nm2 << " = " << nm1-nm2 << endl;
    cout << "Multiplication: " << nm1 << " * " << nm2 << " = " << nm1*nm2 << endl;
    cout << "Division: " << nm1 << " / " << nm2 << " = " << nm1/nm2 << endl;
    cout << "Power: " << nm1 << " ^ " << nm2 << " = " << pow(nm1, nm2) << endl;
    cout << endl;
    cout << endl;
    main();
}

double calq(double num1,double num2, char op){
    double result = 0.0;
    if(op == '+'){
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result;
    }else if(op == '-'){
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result;
    }else if(op == '*'){
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result;
    }else if(op == '/'){
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result;
    }else if(op == '^'){
        result =  pow(num1, num2);
        cout << num1 << " ^ " << num2 << " = " << result;
    }

    return result;
}
