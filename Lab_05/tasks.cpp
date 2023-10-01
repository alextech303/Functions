
#include <iostream>
#include <cstdio>
#include <locale>

using namespace std;

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
	int sum= a + b + c;

	int& rsum=sum;

	a = rsum;
	
	cout << "Значение 1-го аргумента после присвоения значения по ссылке = " << a << endl;
}



int function_4(int *array,int size) {
	
	int *pa = NULL;
	
	for (int i = 0; i <size ; i++) {
		
		if (array[i]<0) {
			int x = *(array+i);
			pa = &x;
		}
	}
	return *pa;
}

int* function_5(int** arrayNumber, int size_1, int size_2) {
	
		for (int i = 0; i < size_1; i++) {
		arrayNumber[i] = new int[size_2];
	}

	
	int** arrayNumber_2 = arrayNumber;

	int x = 1;
	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {
			
			*(*(arrayNumber_2 + i) + j) = rand() % 100;;
		}
	}


	for (int i = 0; i < size_1; i++) {
		for (int j = 0; j < size_2; j++) {
		cout << *(*(arrayNumber_2 +i)+j) << "\t";

		}
		cout << endl;

	}
	int tmp;
	for (int i = 0; i < size_1 - 1; i++) {
		for (int j = i + 1; j < size_2; j++) {
			tmp = arrayNumber_2[i][j];
			arrayNumber_2[i][j] = arrayNumber_2[j][i];
			arrayNumber_2[j][i] = tmp;
		}
	}

	int* minarray = new int[size_2];
	
	int* minArray = new int[size_2];
	for (int i = 0; i < size_1; i++) {
		int maxNumber = 100;
		for (int j = 0; j < size_2; j++) {
						
			if (arrayNumber_2[i][j] < maxNumber)
				maxNumber = arrayNumber_2[i][j];
		}
		minArray[i] = maxNumber;
		
		cout << endl;

	}
	return minArray;
}

	

int main() {
	setlocale(LC_CTYPE, "Russian");
	
	//cout << "Cумма всех четных чисел в диапозоне от 123 до 347 :" << function_1() << endl;
	
		
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
	
	//function_4:
	// 
	
	//int array[10] = {-2,-5,3,4,5,6,7,8,9,10 };
	//int array[10] = { -2,5,3,4,5,6,7,8,-9,-10 };
	//int pa = function_4(array, 10);
	//cout << "pa = " << pa << endl;
	
	cout << "Введите количество указателей на одномерные массивы : " << endl;
	int size_1;
	cin >> size_1;
	cout << endl;

	cout << "Введите количество элементов в одномерном массиве : " << endl;
	int size_2;
	cin >> size_2;
	cout << endl;
	int** arrayNumber = new int*	[size_1];
	int* minArray = function_5(arrayNumber, size_1, size_2);
	cout << endl;
	for (int i = 0; i < size_2; i++) {
		cout << *minArray++ << "\t";

	}
	
	system("pause");
	return 0;

}
