/*#include <iostream>
using namespace std;
int main()
{
	cout << "请输入十个数" << endl;
	int i = 0, t = 0;
	double num[10];
	for(double n;i<10;i++)
	{
		bool k = 1;
		cin >> n;
		for(int j=0;j<10;j++)
		{
			if (num[j] == n)k = 0;
		}
		if (k) {
			num[t] = n;
			t++;
		}
	}
	for (int j=0;j<t;j++)
	{
		cout << num[j] << "\t";
	}
	return 0;
}*/