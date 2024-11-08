/*#include <iostream>
#include <string>
using namespace std;
double calculate(double num1, double num2, char op) {
    switch (op) {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if (num2 != 0) {
            return num1 / num2;
        }
        else {
            cout << "除数不能为 0！" << endl;
            return 0;
        }
    case '%':
        if (num2 != 0) {
            return static_cast<int>(num1) % static_cast<int>(num2);
        }
        else {
            cout << "除数不能为 0！" << endl;
            return 0;
        }
    default:
        cout << "非法运算符！" << endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    char op;

    cout << "请输入第一个数：";
    cin >> num1;

    cout << "请输入运算符（+ - * / %）：";
    cin >> op;

    cout << "请输入第二个数：";
    cin >> num2;

    double result = calculate(num1, num2, op);

    cout << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}
*/