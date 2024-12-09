#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int n = 2;
	for(int x=num%n;n<num;n++)
	{
		x = num % n;
		if (x == 0)return false;
	}
	return true;
}
int main()
{
	int  s, d, i = 0;
	cout << "请输入你想检索前多少个素数" << endl;
	cin >> d;
	for(s = 2;i < d;s++)
	{
		if (is_prime(s))
		{
			i++;
			cout << s << "\t";
			if (i%10==0)
			{
				cout << endl;
			}
		}
	}
	return 0;
}