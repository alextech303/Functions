
#include <iostream>
#include <cstdio>
#include <locale>

using namespace std;

// ��� ����������
	//��������� ����� ���� ������ ����� � ��������� �� 123 �� 347 
int function_1() {
	int sum = 0;
	
	for (int i = 123; i <= 347; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	return sum;
	
}


void  function_2(int a, int b, int c) {
	
	if (c<b && c>a) {
		printf_s("������� �� ������ ������� ������ ������� � ������ ������� : �� \n\n");
		
	} else {
		printf_s("������� �� ������ ������� ������ ������� � ������ ������� : ��� \n\n");
		}

}

int function_3(int a, int b, int c ) {
//��������� ����� ���� ����� � �������� �������� 1-�� ��������� �� �������� ����� �� ������:
	int sum= a + b + c;
		
	int *pa = &sum;
	a = *pa;
	cout << "�������� 1-�� ��������� ����� ���������� �������� �� ������ &sum = " << a << endl;
	return 0;
}

int main() {
	setlocale(LC_CTYPE, "Russian");


// function_2,function_3:
	int argX;
	int arrayArg[3];
	for (int i = 0; i < 3; i++) {
		
		cout << "������� �������� " << i+1 << "-�� ���������" << endl;
		cin >> argX;
			arrayArg[i] = argX;
	}
	int *px = arrayArg;
	int a = *px;
	int b = *++px;
	int c = *++px;
	
	//function_2(a, b, c);

	//function_3(a,b,c);

	system("pause");
	return 0;

}