#include"mytriangle.h"
int main()
{
	double a, d, n;
	cout << "请输入三角形的三边"<<endl;
	cin >> a >> d >> n;
	if (is_valid(a, d, n))
	{
		cout << "三角形的面积为" << area(a, d, n);
	}
	else cout << "错误";
	return 0;
}