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
	cout << "�����������������Ŀ";
	int a; cin >> a;
	double* num = new double[a];
	for(int i=0;i<a;i++)
	{
		cout << "�������" << i + 1 << "����" << endl;
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