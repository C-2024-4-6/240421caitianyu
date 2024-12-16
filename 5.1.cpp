#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:            // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	Time()
	{
		cout << "请输入时分秒三个整数" << endl;
		cin >> hour >> minute >> sec;
	}
	void show()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl; //定义t1为Time类对象
	tl.show();
	return 0;
}
