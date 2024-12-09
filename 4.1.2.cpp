#include<iostream>
using namespace std;
void inl(double *num,int n)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < n - 1; j++)
			if (num[j] > num[j + 1])
			{
				swap(num[j], num[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main()
{
	cout << "请输入你想排序的数目";
	int a; cin >> a;
	double* num = new double[a];
	for(int i=0;i<a;i++)
	{
		cout << "请输入第" << i + 1 << "个数" << endl;
		cin >> num[i];
	}
	inl(num,a);
	for (int i = 0; i < a; i++)
	{
		cout << num[i] << "\t";
	}
	delete[] num;
	return 0;
}