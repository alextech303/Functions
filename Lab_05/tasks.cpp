
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
		printf_s("Являеся ли третий аргумент меньше второго и больше первого? : да \n\n");
		
	} else {
		printf_s("Являеся ли третий аргумент меньше второго и больше первого? : нет \n\n");
		}
}

void function_3(int a, int b, int c ) {
//Вычислить сумму трех чисел и заменить значение 1-го аргумента на значение суммы по ссылке:
	int sum= a + b + c;

	int& rsum=sum;
	a = rsum;
	
	cout << "Значение 1-го аргумента после присвоения значения по ссылке = " << a << endl;
	
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
	/*int a = 0;
	int n = 0;
	int k = 0;*/
	int y = 5;
	for (int i = 0; i < size_1; i++) {
		arrayNumber[i] = new int[size_2];
	}

	int* pmincolumn = new int[size_1 * size_2];

	int** arrayNumber_2 = arrayNumber;

	int x = 1;
	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {
			//arrayNumber_2[i][j] = rand() % 100;
			//arrayNumber_2[i][j] = x++;
			*(*(arrayNumber_2 + i) + j) = x++;
			//*(*(arrayNumber_2 + i) + j) = rand() % 100;;
		}
	}


	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {
			//cout << arrayNumber_2[i][j] << "\t";
			cout << *(*(arrayNumber_2 +i)+j) << "\t";

		}
		cout << endl;

	}


	int* minArray = new int[size_2];
	int pa = size_2;
	for(int i=0;i< size_1;i++){
	while (size_2) {
		cout << *(*arrayNumber_2++) << "\t";
			
		pa--;
	}
	cout << endl;
	}

			
		
		
		//*minArray++ = min;
	
	/*int lenght = size_2;
	//for (int j = 0; j < size_2; j++) {
		for (int i = 0; i < size_1; i++) {

			pmincolumn[n++] = arrayNumber_2[i][j];
		}
	}

	int* pmincolumn_2 = new int[size_2];
	int min = 0;
	for (int i = a; i < size_2; n++) {
		while(lenght--){
			if (pmincolumn[i] < pmincolumn[i + 1]) {
				min = pmincolumn[i];
				cout << pmincolumn[i];
				i++;
			}
			}

		pmincolumn_2[k++] = min;
		a += size_2;

	}*/



	//int lenght =size_1*size_2;
	//
	//while (lenght--) {

	//	//bool swapped = false;

	//	for (int i = 0; i < lenght; i++)
	//	{
	//		if (pmincolumn[i] > pmincolumn[i + 1])
	//		{
	//			swap(pmincolumn[i], pmincolumn[i + 1]);
	//			//swapped = true;
	//		}
	//	}

		//if (swapped == false)
		//	break;




	/*int length = size_1 * size_2;

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
	}*/

	return minArray;
}

	

int main() {
	setlocale(LC_CTYPE, "Russian");
	//int x [] = { 1,2,3,4,5,6,7,8 };
	//cout << "x = " << x << endl;
	//cout << "&x[0] = " << &x[0] << endl;
	//cout << "&x[5] = " << &x[5] << endl;
	//cout << "x+5 = " << x+5 << endl;
	//int* px = x + 5;
	//cout << "int* px = x + 5 ; " <<  endl;
	//cout << "px = " << px << endl;
	//int* py = x + 7;
	//cout << "int* py = x + 7 ; " << endl;
	//cout << "py = " << py << endl;
	//cout << "py - px = " << py-px << endl;
	//cout << "*py - *px = " << *py - *px << endl;//!!!!!!!!!!!!!!
	//cout << "*px = " << *px << endl;
	//cout << "*py = " << *py << endl;
	//int i = (py == px);
	//cout << i << endl;

	//const double PI = 3.1415;
	////double* pPI = &PI; // ошибка
	//const double *pPI = &PI;
	//cout << "*pPI = " << *pPI << endl;
	////*pPI = 3.1415; // ошибка, но сам указатель можно менять:
	//const double E = 2.71828;
	//pPI = &E;
	//cout << "*pPI = " << *pPI << endl;
	


// function_2,function_3:
	int argX;
	int arrayArg[3];
	for (int i = 0; i < 3; i++) {
		
		cout << "Введите значение " << i+1 << "-го аргумента" << endl;
		cin >> argX;
			arrayArg[i] = argX;
	}
	int *px = arrayArg;
	int a = *px;
	int b = *++px;
	int c = *++px;
	
	//function_2(a, b, c);

	function_3(a,b,c);

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
	int size_1;
	cin >> size_1;
	cout << endl;

	cout << "Введите количество элементов в одномерном массиве : " << endl;
	int size_2;
	cin >> size_2;
	cout << endl;*/
	
	
	/*При формировании двумерного динамического массива сначала выделяется 
		память для массива указателей на одномерные массивы, 
		а затем в цикле с параметром выделяется память под одномерные массивы.*/
		
	//захватили память под size_1 указателей
	/*int** arrayNumber = new int*	[size_1];
	int* pmincolumnarray = function_5(arrayNumber, size_1, size_2);
	cout << endl;*/
	/*for (int i = 0; i < size_1*size_2; i++) {
		cout << *pmincolumnarray++ << "\t";

	}*/
	/*for (int i = 0; i < size_1 * size_2; i++) {*/
	//	cout << *pmincolumnarray++ << "\t";

	//}

	int s = 10;
	int& rs = s;// Это не самостоятельная переменная,
	//а просто ссылка на объект, уже живущий в памяти.

	system("pause");
	return 0;

}
