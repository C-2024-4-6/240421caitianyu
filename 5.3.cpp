#include<iostream>
using namespace std;
#define D double
class cub
{
private:
	D len; D wid; D heg;
public:
	cub(D len, D wid, D heg)
	{
		this->len = len;
		this->wid = wid;
		this->heg = heg;
	}
	void show_V(int i)
	{
		D V = len * wid * heg;
		cout << "长方体" << i << "的体积为" << V << endl;
	}
};
int main()
{
	D a, s, d, f, g, h, j, k, l;
	a = s = d = f = g = h = j = k = l = 0;
	cout << "请依次输入三个长方体的长宽高" << endl;
	cin >> a >> s >> d >> f >> g >> h >> j >> k >> l;
	cub a1(a, s, d), a2(f, g, h), a3(j, k, l);
	a1.show_V(1); a2.show_V(2); a3.show_V(3);
	return 0;
}