/*#include <iostream>
#include <string>
using namespace std;
void main()
{
	string str;
	cout << "请输入一行字符"<<endl;
	getline(cin, str);
	int 英文 = 0, 空格 = 0, 数字 = 0, 其它 = 0;
	for(char c:str){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            英文++;
        }
        else if (c == ' ') 
        {
            空格++;
        }
        else if (c >= '0' && c <= '9') 
        {
            数字++;
        }
        else
        {
            其它++;
        }
    }
    cout << "英文字母个数: " <<英文  << endl;
    cout << "空格个数: " << 空格 << endl;
    cout << "数字字符个数: " << 数字 << endl;
    cout << "其他字符个数: " <<其它  << endl;
}
*/