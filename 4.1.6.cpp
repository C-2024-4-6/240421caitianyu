#include<iostream>
#include<string>
using namespace std;
void ct( char *s, int *cs)
{
	for (int nu = 0; s[nu]!='\0'; nu++)
	{
		for (int i = 0; i < 26; i++)
		{
			if (s[nu] == 'a' + i || s[nu] == 'A' + i)cs[i]++;
		}
	}	
}
int main()
{
	char s[100];
	int a = 0, cs[26] = {0};
	string str;
	cout << "������һ��Ӣ��" << endl;
	getline(cin, str);
	for (size_t a = 0; a < str.size(); a++)
	{
		s[a] = str[a];
	}
	s[str.size()] = '\0';
	ct(s, cs);
	for(int j=0;j<26;j++)
	{
		cout << "��ĸ" << char('A' + j)<<'('<<char('a'+j) << ')' << "������" << cs[j] << "��" << '\t';
		if ((j + 1) % 5 == 0)cout << endl;
	}
	return 0;
}