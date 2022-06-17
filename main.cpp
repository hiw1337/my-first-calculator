#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "enter the first number: ";
    cin >> num1;
    cout << "enter the operator: ";
    cin >> op;
    cout << "enter the second number: ";
    cin >> num2;
    int result;
    if(op == '+'){
      result = num1 + num2;
    } else if(op == '-'){
    result = num1 - num2;
    } else if(op == '*'){
    result = num1 * num2;
    } else if(op == '/'){
    result = num1 / num2;
    } else {
      cout << "invalid number and/or operator, please enter just numbers and for the operators either '+, -, * or /' ";
    }

     cout << result;
    return 0;
}
