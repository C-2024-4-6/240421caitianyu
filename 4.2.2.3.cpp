#include<iostream>
#include<vector>
using namespace std;
void line(double* list, int len)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < len - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main()
{
	vector <double> c;
	double z = 0;
	cout << "请输入数组中的元素（数字）" << endl << "（输入非数字停止）" << endl;
	for (int i = 0; true; i++)
	{
		cin >> z;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
		c.push_back(z);
	}
	double* num = new double[c.size()];
	for(size_t i=0;i<c.size();i++)
	{
		num[i] = c[i];
	}
	line(num, c.size());
	for (size_t i = 0; i < c.size(); ++i)
	{
		cout << num[i] << " ";
	}
	cout << endl;
	delete[] num;
	return 0;
}