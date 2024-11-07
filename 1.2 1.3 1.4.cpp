/*
#include<iostream>
using namespace std;
void main()
{
	const double pi = 3.14159265;
	double r,h,V;
	cout << "请输入半径" << endl;
	cin >> r;
	cout << "请输入锥高" << endl;
	cin >> h;
	V = pi * h * r * r / 3;
		cout <<"圆锥的体积是" <<V;
}*/



/*#include<iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
}
*/



/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
		cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "output in oct type:" << oct<<(testUnint) << endl;
	double e = 3.33232455;
	cout << static_cast<int>(e)<<endl;
	system("pause");
	return 0;
}*/