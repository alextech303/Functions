
#include <iostream>
#include <cstdio>
#include <locale>

using namespace std;

// без аргументов
	//¬ычислить сумму всех четных чисел в диапазоне от 123 до 347 
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
		printf_s("явл€ес€ ли третий элемент меньше второго и больше первого : да \n\n");
		
	} else {
		printf_s("явл€ес€ ли третий элемент меньше второго и больше первого : нет \n\n");
		}

}

int function_3(int a, int b, int c ) {
//¬ычислить сумму трех чисел и заменить значение 1-го аргумента на значение суммы по ссылке:
	int sum= a + b + c;
		
	int *pa = &sum;
	a = *pa;
	cout << "«начение 1-го аргумента после присвоени€ значени€ по ссылке &sum = " << a << endl;
	return 0;
}

void swap(int a, int b) {
	//cout << "a = " << a << "; b = " << b << endl;
	int t = a;
	a = b;
	b = t;

	//cout << "a = " << a << "; b = " << b << endl;
	cout << "___________________________________" << endl;;
}

void swap2(int *x, int *y) {
//	cout << "x = " << *x << "; y = " << *y << endl;
	int t = *x;
	*x = *y;
	*y = t;

	//cout << "x = " << *x << "; y = " << *y << endl;
	cout << "___________________________________" << endl;;

}

void swap3(int &x, int &y) {
	cout << "x = " << x << "; y = " << y << endl;
	int t = x;
	x = y;
	y = t;

	cout << "x = " << x << "; y = " << y << endl;
	cout << "___________________________________";
}

int function_4(int *array,int size) {
	
	int *pa = NULL;
	//cout << "array[1] = " << array[1] << endl;
	for (int i = 0; i < size; i++) {

		
		if (array[i]<0) {
			int x = array[i];
			pa = &x;
			cout << "pa1 внутри функции = " << *pa << endl;
		}
		/*if (array[i] < 0) {
			int x = array[i];
			int* pa = &x;
			cout << "pa1 внутри функции = " << pa << endl;
		}*/
	}
	return *pa;

}

int main() {
	setlocale(LC_CTYPE, "Russian");


// function_2,function_3:
	/*int argX;
	int arrayArg[3];
	for (int i = 0; i < 3; i++) {
		
		cout << "¬ведите значение " << i+1 << "-го аргумента" << endl;
		cin >> argX;
			arrayArg[i] = argX;
	}
	int *px = arrayArg;
	int a = *px;
	int b = *++px;
	int c = *++px;*/
	
	//function_2(a, b, c);

	//function_3(a,b,c);

	/*int x = 3; int y = 7;

	swap(x, y);
	cout << "передача аргументов по значению:" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "передача аргументов по значению через указатель:" << endl;

	swap2(&x, &y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;*/
	//swap3(x, y);

	//function_4:
	int array[10] = { 2,5,3,4,5,6,7,8,9,10 };
	int pa1 = function_4(array, 10);
	cout << "pa1 = " << pa1 << endl;
	
	
	


	system("pause");
	return 0;

}