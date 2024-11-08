/*#include <iostream>
using namespace std;

bool yorn(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool a_a(double a, double b, double c) {
    return (a == b) || (a == c) || (b == c);
}

int main() {
    double a, b, c;

    cout << "请输入三角形的三条边：" << endl;
    cin >> a >> b >> c;

    if (yorn(a, b, c)) {
        double perimeter = a + b + c;
        cout << "三角形的周长为：" << perimeter << endl;

        if (a_a(a, b, c)) {
            cout << "该三角形是等腰三角形" << endl;
        }
        else {
            cout << "该三角形不是等腰三角形" << endl;
        }
    }
    else {
        cout << "输入的三条边不能构成三角形" << endl;
    }

    return 0;
}*/
