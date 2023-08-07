
#include <iostream>
#include <cstdio>
#include <locale>

using namespace std;

// без аргументов
	//Вычислить сумму всех четных чисел в диапазоне от 123 до 347 
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
		printf_s("Являеся ли третий элемент меньше второго и больше первого : да \n\n");
		
	} else {
		printf_s("Являеся ли третий элемент меньше второго и больше первого : нет \n\n");
		}

}

int function_3(int a, int b, int c ) {
//Вычислить сумму трех чисел и заменить значение 1-го аргумента на значение суммы по ссылке:
	int sum= a + b + c;
		
	int *pa = &sum;
	a = *pa;
	cout << "Значение 1-го аргумента после присвоения значения по ссылке &sum = " << a << endl;
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
	
	for (int i = size; i > 0 ; i--) {

		
		if (array[i]<0) {
			int x = array[i];
			pa = &x;
		}
		
	}
	return *pa;

}

int* function_5(int** array, int size) {
	int count = 0;
	int *pmin=new int [size];

	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size; j++) {
			if (array[i][j] % 2 == 0) {
				count++;
			}
			cout << array[i][j] << "\t";
			
		}
		cout << endl;
	}
	int* parr = new int[count];
	int k = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[i][j] % 2 == 0) {
				parr[k] = array[i][j];
				k++;
			}

		}
	}
	cout << "______________" << endl;
	cout << "массив из четных чисел :" << endl;
	for (int i = 0; i < count; i++) {
		cout << *parr++ << "\t";
	}
	cout << endl;
	cout << "________________" << endl;
	return parr;
}

int main() {
	setlocale(LC_CTYPE, "Russian");


// function_2,function_3:
	/*int argX;
	int arrayArg[3];
	for (int i = 0; i < 3; i++) {
		
		cout << "Введите значение " << i+1 << "-го аргумента" << endl;
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
	/*int array[10] = {-2,-5,3,4,5,6,7,8,9,10 };
	int pa = function_4(array, 10);
	cout << "pa = " << pa << endl;
	*/
	/*cout << "Введите количество указателей на одномерные массивы : " << endl;
	int j;
	cin >> j;*/
	/*int z = 11;
	int*  pz = &z;
	int** ppz = &pz;
	int*** pppz = &ppz;
	cout << "z = " << z << endl;
	cout << "pz = " << pz << endl;
	cout << "ppz = " << ppz << endl;
	cout << "pppz = " << pppz << endl;
	cout << " *pz = " << *pz << endl;
	cout << "**ppz = " << **ppz << endl;
	cout << "***pppz = " << ***pppz << endl;

	pz = new int[j];
	for (int i = 0; i < j; i++) {
		cout << "Введите " << i << " элемент массива" << endl;
		cin >> pz[i];

	}
	cout << "_______________" << endl;
	for (int i = 0; i < j; i++) {

		cout << pz[i] << endl;;

	}*/
	/*При формировании двумерного динамического массива сначала выделяется 
		память для массива указателей на одномерные массивы, 
		а затем в цикле с параметром выделяется память под одномерные массивы.*/
		
	/*int** array2;
	array2 = new int* [j];
	for (int i = 0; i < j; i++) {
		array2[i] = new int[10];
	}

	int** array22;
	array22 = array2;
	for (int i = 0; i < j; i++) {
		for (int j = 0; j < 10; j++) {
			array22[i][j] = i * 100 + j;
		}
	}

	for (int i = 0; i < j; i++) {
		cout << "\n";
		for (int j = 0; j < 10; j++) {
			cout<<array22[i][j]<<"\t";
		}
	}
	*/
	int** ar = new int*	[3];
	ar[0] = new int[5] {1,2,3,4,5};
	ar[1] = new int[5] {6,7,8,9,10};
	ar[2] = new int[5] {11,12,13,14,15};
	

	cout << function_5(ar, 3) << endl;;

	
	system("pause");
	return 0;

}