#include <iostream>
#include "set.h"
using namespace std;

int main() {
	int firstArraySize, secondArraySize;
	cout << "----------------------���ϲ���----------------------" << endl;
	cout << "�������һ������������";
	cin >> firstArraySize;
	cout << "�����뼯�ϣ��ûس��ָ�����"<<endl;
	int* firstArray = (int*)malloc(sizeof(int) * firstArraySize);
	for (int a = 0; a < firstArraySize; a++) {
		cin >> firstArray[a];
	}
	cout << "������ڶ�������������";
	cin >> secondArraySize;
	cout << "�����뼯�ϣ��ûس��ָ�����"<<endl;
	int* secondArray = (int*)malloc(sizeof(int) * secondArraySize);
	for (int b = 0; b < secondArraySize; b++) {
		cin >> secondArray[b];
	}
	Set set1(firstArray, firstArray + firstArraySize),
		set2(secondArray, secondArray + secondArraySize),set3,set4;
	cout << "����һ��";
	set1.show();
	cout << "���϶���";
	set2.show();
	while (true) {
		cout << endl;
		cout << endl;
		cout << "----------------------���ϲ���---------------------" << endl;
		cout << "1--------------------------------------------�󽻼�" << endl;
		cout << "2--------------------------------------------�󲢼�" << endl;
		cout << "3------------------------------------------����Ԫ��" << endl;
		cout << "4------------------------------------------ɾ��Ԫ��" << endl;
		cout << "5----------------------------------------------���" << endl;
		cout << "6----------------------------------------------����" << endl;
		cout << "7----------------------------------------------�˳�" << endl;

		int action,i,j;
		cout << "��ѡ�������";
		cin >> action;
		switch (action)
		{
		case 1:
			cout << "�������Ͻ���Ϊ��";
			set3 = set1 - set2;
			set3.show();
			break;
		case 2:
			cout << "�������ϲ���Ϊ��";
			set4 = set1 + set2;
			set4.show();
			break;
		case 3:
			cout << "ѡ��Ҫ�����ļ��ϣ�1��2����";
			cin >> i;
			cout << "������Ҫ�������ֵ��";
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
			cout << "ѡ��Ҫ�����ļ��ϣ�1��2����";
			cin >> i;
			cout << "������Ҫɾ������ֵ��";
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
			cout << "ѡ��Ҫ�����ļ��ϣ�1��2����";
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
				cout << "ѡ��Ҫ�����ļ��ϣ�1��2����";
				int size;
				cin >> i;
				cout << "�����뼯��������";
				cin >> size;
				cout << "�����뼯�ϣ��ûس��ָ�����" << endl;
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
