#include <iostream>
#include "set.h"
using namespace std;

int main() {
	int firstArraySize, secondArraySize;
	cout << "----------------------集合操作----------------------" << endl;
	cout << "请输入第一个集合数量：";
	cin >> firstArraySize;
	cout << "请输入集合（用回车分隔）："<<endl;
	int* firstArray = (int*)malloc(sizeof(int) * firstArraySize);
	for (int a = 0; a < firstArraySize; a++) {
		cin >> firstArray[a];
	}
	cout << "请输入第二个集合数量：";
	cin >> secondArraySize;
	cout << "请输入集合（用回车分隔）："<<endl;
	int* secondArray = (int*)malloc(sizeof(int) * secondArraySize);
	for (int b = 0; b < secondArraySize; b++) {
		cin >> secondArray[b];
	}
	Set set1(firstArray, firstArray + firstArraySize),
		set2(secondArray, secondArray + secondArraySize),set3,set4;
	cout << "集合一：";
	set1.show();
	cout << "集合二：";
	set2.show();
	while (true) {
		cout << endl;
		cout << endl;
		cout << "----------------------集合操作---------------------" << endl;
		cout << "1--------------------------------------------求交集" << endl;
		cout << "2--------------------------------------------求并集" << endl;
		cout << "3------------------------------------------插入元素" << endl;
		cout << "4------------------------------------------删除元素" << endl;
		cout << "5----------------------------------------------清空" << endl;
		cout << "6----------------------------------------------重设" << endl;
		cout << "7----------------------------------------------退出" << endl;

		int action,i,j;
		cout << "请选择操作：";
		cin >> action;
		switch (action)
		{
		case 1:
			cout << "两个集合交集为：";
			set3 = set1 - set2;
			set3.show();
			break;
		case 2:
			cout << "两个集合并集为：";
			set4 = set1 + set2;
			set4.show();
			break;
		case 3:
			cout << "选择要操作的集合（1或2）：";
			cin >> i;
			cout << "请输入要插入的数值：";
			cin >> j;
			if (i == 1) {
				set1.insert(j);
				set1.show();
			}
			else if (i == 2) {
				set2.insert(j);
				set2.show();
			}
			break;
		case 4:
			cout << "选择要操作的集合（1或2）：";
			cin >> i;
			cout << "请输入要删除的数值：";
			cin >> j;
			if (i == 1) {
				set1.remove(j);
				set1.show();
			}
			else if (i == 2) {
				set2.remove(j);
				set2.show();
			}
			break;
		case 5:
			cout << "选择要操作的集合（1或2）：";
			cin >> i;
			if (i == 1) {
				set1.clear();
				set1.show();
			}
			else if (i == 2) {
				set2.clear();
				set2.show();
			}
		
			break;
		case 6:
			{
				cout << "选择要操作的集合（1或2）：";
				int size;
				cin >> i;
				cout << "请输入集合数量：";
				cin >> size;
				cout << "请输入集合（用回车分隔）：" << endl;
				int* a = (int*)malloc(sizeof(int) * size);
				for (int i = 0; i < size; i++) {
					cin >> a[i];
				}
				if (i == 1) {
					set1.setArray(a, a + size);
					set1.show();
				}
				else if (i == 2) {
					set2.setArray(a, a + size);
					set2.show();
				}
			}
			break;
		
		case 7:
			return 0;
		default:
			cout << "invalid value." << endl;
			break;
		}
	}
	return 0;
}
