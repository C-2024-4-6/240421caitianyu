//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//int te(const char n)
//{
//	if ('0' <= n && n <= '9')return int(n - '0');
//	if ('A' <= n && n <= 'F')return int(n - 'A' + 10);
//	if ('a' <= n && n <= 'f')return int(n - 'a' + 10);
//	throw invalid_argument("�����ʮ�����Ʋ��Ϸ�");
//}
//int parse(const string hx)
//{
//	int re = 0;
//	int a = hx.size();
//	for(int i=0;i<a;i++)
//	{
//		char h = hx[i];
//		int m = te(h);
//		re += m * static_cast<int>(pow(16, a - i - 1));
//	}
//	return re;
//}
//int main()
//{
//	string n;
//	cout << "������һ��ʮ��������" << endl;
//	cin >> n;
//	try
//	{
//		cout << "ת����ʮ���ƵĽ��Ϊ" << parse(n);
//	}
//	catch (const invalid_argument& e)
//	{
//		cout << "����: " << e.what() << endl;
//	}
//	return 0;
//}