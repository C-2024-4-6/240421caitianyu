//#include<iostream>
//using namespace std;
//int indexof(const char s1[],int Ls1, const char s2[],int Ls2)
//{
//	for (int i = 0; i < Ls2 - Ls1; i++)
//	{
//		int j;
//		for (j = 0; j < Ls1; j++)
//		{
//			if (s2[i + j] != s1[j])break;
//		}
//		if (j == Ls1)return i+1;
//	}
//	return -1;
//}
//int main()
//{
//	int ls1, ls2;
//	cout << "请输入两个字符串的长度（小的在前）" << endl;
//	cin >> ls1 >> ls2;
//	while (ls1 > ls2)
//	{
//		cout << "您可能输反了，请重试";
//		cin >> ls1 >> ls2;
//	}
//	char* s1 = new char[ls1];
//	char* s2 = new char[ls2];
//	cout << "请依次输入第一个字符串的元素" << endl;
//	for (int a = 0; a < ls1; a++)
//	{
//		cin >> s1[a];
//	}
//	cout << "请依次输入第二个字符串的元素" << endl;
//	for (int b = 0; b < ls2; b++)
//	{
//		cin >> s2[b];
//	}
//	int re = indexof(s1, ls1, s2, ls2);
//	if (re > 0)cout << "字符串1是字符串2从第" << re << "个字符开始的子字符串";
//	else cout << -1;
//	delete[] s1;
//	delete[] s2;
//	return 0;
//}