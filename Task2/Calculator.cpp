#include <iostream>
using namespace std;

void calculate();
void continueFun();

int main() {
    cout << "\n\n-------------------------------------------------------------\n";
    cout << "|   -  WELCOME  TO  THE  BASIC  ARITHMETIC  CALCULATOR  -   |"<<endl;
    cout << "-------------------------------------------------------------\n\n";
    calculate();
    return 0;
}

void calculate() {
    int num1, num2, result;
    int choice;

    cout << "Enter the Number 1 : ";
    cin >> num1;
    cout << "Enter the Number 2 : ";
    cin >> num2;

    cout << "\n1 : Addition [+]\n2 : Subtraction [-]\n3 : Multiplication [*]\n4 : Division [/]\n\nEnter the correct number for the chosen operation : ";
    cin >> choice;

    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "\n" << num1 << " + " << num2 << " is : " << result;
            break;
        case 2:
            result = num1 - num2;
            cout << "\n" << num1 << " - " << num2 << " is : " << result;
            break;
        case 3:
            result = num1 * num2;
            cout << "\n" << num1 << " * " << num2 << " is : " << result;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "\n" << num1 << " / " << num2 << " is : " << result;
            } else {
                cout << "\nError: Division by zero!";
            }
            break;
        default:
            cout << "Invalid choice !!";
            break;
    }
    
    continueFun();
    
}

void continueFun(){
    char continueChoice;

    cout << "\n\n. . . . . . . . . . . . . . . . . . . . . . . . . . .\n";
    cout << "\nDo you want to continue (y/n)? ";
    cin >> continueChoice;

    if (continueChoice == 'y' || continueChoice == 'Y') {
        cout << "\n";
        calculate();
    }
    else if (continueChoice == 'n' || continueChoice == 'N') {
        cout << "\nThank You !!\n\n";
    }
    else {
        cout << "\nPlease Enter the Correct Input!!!\n[y/Y] For 'Yes'\n[n/N] For 'No'";
        cout << "\n";
        continueFun();
    }
}