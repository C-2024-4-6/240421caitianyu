/*#include <iostream>
#include <string>
using namespace std;
void main()
{
	string str;
	cout << "������һ���ַ�"<<endl;
	getline(cin, str);
	int Ӣ�� = 0, �ո� = 0, ���� = 0, ���� = 0;
	for(char c:str){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            Ӣ��++;
        }
        else if (c == ' ') 
        {
            �ո�++;
        }
        else if (c >= '0' && c <= '9') 
        {
            ����++;
        }
        else
        {
            ����++;
        }
    }
    cout << "Ӣ����ĸ����: " <<Ӣ��  << endl;
    cout << "�ո����: " << �ո� << endl;
    cout << "�����ַ�����: " << ���� << endl;
    cout << "�����ַ�����: " <<����  << endl;
}
*/