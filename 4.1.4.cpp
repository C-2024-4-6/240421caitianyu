//#include<iostream>
//using namespace std;
//void merge(const int list1[], int s1, const int list2[], int s2, int* list3)
//{
//	for (int i = 0; i < s1; i++)
//	{
//		list3[i] = list1[i];
//	}
//	for (int i = 0; i < s2; i++)
//	{
//		list3[s1 + i] = list2[i];
//	}
//	bool changed = true;
//	do
//	{
//		changed = false;
//		for (int j = 0; j < s1 + s2 - 1; j++)
//			if (list3[j] > list3[j + 1])
//			{
//				swap(list3[j], list3[j + 1]);
//				changed = true;
//			}
//	} while (changed);
//}
//int main()
//{
//	int s1, s2;
//	cout << "请分别输入两个数组的长度" << endl;
//	cin >> s1 >> s2;
//	int* list1 = new int[s1];
//	int* list2 = new int[s2];
//	int* list3 = new int[s2 + s1];
//	cout << "请依次输入第一个数组的元素" << endl;
//	for (int a = 0; a < s1; a++)
//	{
//		cin >> list1[a];
//	}
//	cout << "请依次输入第二个数组的元素" << endl;
//	for (int b = 0; b < s2; b++)
//	{
//		cin >> list2[b];
//	}
//	merge(list1, s1, list2, s2, list3);
//	cout << "最后的结果为";
//	for (int j = 0; j < s1 + s2; j++)
//	{
//		cout << list3[j] << ',';
//	}
//	delete[] list1;
//	delete[] list2;
//	delete[] list3;
//	return 0;
//}