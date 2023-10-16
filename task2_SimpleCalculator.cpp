#include <bits/stdc++.h>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;
    cout << "Simple Calculator\n";
    string n;
    do{
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!\n";
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Invalid operation selected!\n";
            return 1; // Exit with an error code
    }

    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << "\n";
    
    cout<<endl<<"Do you want to perform it again(Y/N)?"<<endl;
    cin>>n;
}while( n=="y" || n=="Y" ||  n=="yes" || n=="Yes" || n=="YES" );
    return 0;
}
