#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:            // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	Time()
	{
		cout << "������ʱ������������" << endl;
		cin >> hour >> minute >> sec;
	}
	void show()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl; //����t1ΪTime�����
	tl.show();
	return 0;
}
