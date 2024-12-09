#include<iostream>
using namespace std;
int main()
{
	bool box[100] = { false };
	for(int p=1;p<=100;p++)
	{
		for (int n = 1;p*n<=100;n++)
		{
			box[p * n - 1] = !box[p * n - 1];
		}
	}
	for(int j=0;j<100;j++)
	{
		if (box[j]) cout << j + 1 << "\t";
	}
	cout << endl << "以上号码的箱子最后是打开的";
	return 0;
}
