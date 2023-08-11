
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

//void swap(int a, int b) {
//	//cout << "a = " << a << "; b = " << b << endl;
//	int t = a;
//	a = b;
//	b = t;
//
//	//cout << "a = " << a << "; b = " << b << endl;
//	cout << "___________________________________" << endl;;
//}
//
//void swap2(int *x, int *y) {
////	cout << "x = " << *x << "; y = " << *y << endl;
//	int t = *x;
//	*x = *y;
//	*y = t;
//
//	//cout << "x = " << *x << "; y = " << *y << endl;
//	cout << "___________________________________" << endl;;
//
//}
//
//void swap3(int &x, int &y) {
//	cout << "x = " << x << "; y = " << y << endl;
//	int t = x;
//	x = y;
//	y = t;
//
//	cout << "x = " << x << "; y = " << y << endl;
//	cout << "___________________________________";
//}

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

int* function_5(int** arrayNumber, int size_1, int size_2) {
	
	int n = 0;
	int k = 0;
	for (int i = 0; i < size_1; i++) {
		arrayNumber[i] = new int[size_2];
	}

	int* pmincolumn = new int[size_1 * size_2];

	int** arrayNumber_2 = arrayNumber;

	int x = 1;
	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {
			arrayNumber_2[i][j] = rand() % 100;
			//arrayNumber_2[i][j] = x++;

		}
	}

	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {
			cout << arrayNumber_2[i][j] << "\t";

		}
		cout << endl;

	}


	for (int j = 0; j < size_2; j++) {
		for (int i = 0; i < size_1; i++) {
			pmincolumn[n++] = arrayNumber_2[i][j];
		}
	}
	
	int length = size_1 * size_2;
	
	while (length--)
	{
		bool swapped = false;

		for (int i = 0; i < length; i++)
		{
			if (pmincolumn[i] > pmincolumn[i + 1])
			{
				swap(pmincolumn[i], pmincolumn[i + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}


	

	int* pmincolumn_2 = new int[size_2];


	
	return pmincolumn;
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
	cout << "Введите количество указателей на одномерные массивы : " << endl;
	int size_1;
	cin >> size_1 ;
	cout << endl;

	cout << "Введите количество элементов в одномерном массиве : " << endl;
	int size_2;
	cin >> size_2;
	cout << endl;
	
	
	/*При формировании двумерного динамического массива сначала выделяется 
		память для массива указателей на одномерные массивы, 
		а затем в цикле с параметром выделяется память под одномерные массивы.*/
		
	//захватили память под size_1 указателей
	int** arrayNumber = new int*	[size_1];
	int* pmincolumnarray = function_5(arrayNumber, size_1, size_2);
	cout << endl;
	for (int i = 0; i < size_1*size_2; i++) {
		cout << *pmincolumnarray++ << "\t";

	}
		 
	system("pause");
	return 0;

}