#include"mytriangle.h"
int main()
{
	double a, d, n;
	cout << "�����������ε�����"<<endl;
	cin >> a >> d >> n;
	if (is_valid(a, d, n))
	{
		cout << "�����ε����Ϊ" << area(a, d, n);
	}
	else cout << "����";
	return 0;
}