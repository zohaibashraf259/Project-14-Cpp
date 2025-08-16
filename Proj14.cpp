#include <iostream>
using namespace std;

int main () {

    int num1, num2, result;

    cout << "Enter your first number: ";
    cin >> num1;

    cout << "Enter your second number: ";
    cin >> num2;

    if (num2 == 0)
    {
        cout << "Error: Division by zero is not allowed. " <<endl;
    }
    else
    {
        result = num1 / num2;
        cout << "Result of Division: " <<result <<endl;
    }
  return 0;
}
