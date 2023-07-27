
#include <iostream>
#include <cstdio>
#include <locale>

using namespace std;


void string1() {
	char str1[5]="ship";
//	scanf("%s", str1);
	
	str1[2] = 'o';
	printf_s(str1);
	
}

void pointer() {
	/*int k = 0;
	float x[] = { 1,2,3,4,5,464646,7,8,9,10,12,232,22,466,876,99,1000,2,84848,986,235,6,77,88,11,0 };
	int y[] = { 1,2,3,4,5 };
	double z[] = { 1,2,3,4,5 };

	for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) {
		cout << (x[i]) << "|";
	}
	cout << "________________" << endl;



	cout << "adress array x :" << x << endl;
	cout << "adress array x+2 :" << x + 2 << endl;
	cout << "adress cell in array x+5 :" << x + 5 << endl;
	cout << "adress cell in array &x[5] :" << &x[5] << endl;
	cout << "________________" << endl;

	cout << "value cell in array x[5] :" << x[5] << endl;
	cout << "value cell in array *(x+5) :" << *(x + 5) << endl; 

		cout << "sizeof(array float x) :" << sizeof(x[0]) << endl;
	cout << "sizeof(array int y)" << sizeof(y[0]) << endl;
	cout << "sizeof(array double z)" << sizeof(z[0]) << endl;
	cout << "size of all array : " << sizeof(x);
	cout << "number of element on array float x[]) :" << sizeof(x) / sizeof(x[0]) << endl; */
		/*int y = 5;
		int *z = &y;
		int *z = x;
		int *z0 = &x[0];
		int *z1 = x;
		cout << "z0 = " << z0 << endl;
		cout << "*z0 = " << *z0 << endl;
		cout << "z1 = " << z1 << endl;
		cout << "*z1 = " << *z1 << endl;

		double x[][3] = {1,23,2,3,4,5,6,33,4,66,1,22};


		for (int i = 0; i < 4; i++) {
			cout << "\n";
			for (int j = 0; j < 3; j++) {
				cout << x[i][j] << "|";
			}

		}
		cout << "____________" << endl;
		double *px = &x[0][0];
		for (;k < sizeof(x) / sizeof(double);) {
			k++;
			cout << *(px++) << "\t";


		}



		double *px = &x[3][0];
		double* py = x[2];
		cout << *px << endl;
		cout << *py << endl;
		*/
	/*int array[3][3][3] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};
	int *parray = &array[0][0][0];
	for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
		cout << *parray++ << endl;
	}*/
	const double PI = 3.14159;
	const double *pPI = &PI;
}

int max(int a, int b) {
	return (a > b) ? a : b;
}

void d() {

	int y = 5;
	int *px = &y;

	cout << "int y = 5" << endl;
	cout << "int *px = &y" << endl;

	printf_s("Значение до инкремента *px : %d \n\n", *px);
	printf_s("Значение до инкремента px : %d \n\n", px);
	printf_s("Адрес до инкремента &px : %d \n\n", &px);
	printf_s("Адрес до инкремента y : %d \n\n", y);
	printf_s("Адрес до инкремента &y : %d \n\n", &y);
	
	cout << "px++" << endl;
	px++;
	printf_s("Значение *px после инкремента  : % d\n\n", *px);
	printf_s("Значение px после инкремента  : % d\n\n", px);
	printf_s("Адрес после инкремента &px : %d \n\n", &px);
	printf_s("Адрес после инкремента &y : %d \n\n", &y);

	cout << "*px++" << endl;
	*px++;

	printf_s("Значение после инкремента *px : %d \n\n", *px);
	printf_s("Значение после инкремента px : %d \n\n", px);
	printf_s("Адрес после инкремента &px : %d \n\n", &px);
	printf_s("Адрес после инкремента &y : %d \n\n", &y);
		
	printf_s("Значение *px после инкремента  : % d\n\n", *px);
	printf_s("Значение px после инкремента  : % d\n\n", px);
	printf_s("Адрес после инкремента &px : %d \n\n", &px);
	printf_s("Адрес после инкремента &y : %d \n\n", &y);
}



void pointerArray() {
	int x1=1;
	//int x2[1]={1};

	printf_s("%d\n\n", x1);
	//printf_s("%d\n\n", x2[0]);

	////int x1=1;
	int x2[1] = { 1 };
	//printf_s("%d\n\n", x1);
	//printf_s("%d\n\n", x2[0]);
}


int function_1() {
	int sum = 0;
	// без аргументов
	//Вычислить сумму всех четных чисел в диапазоне от 123 до 347 
	for (int i = 123; i <= 347; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	return sum;
	
}



int function_2(int a, int b, int c) {
	int x = 0;
	if (c<b && c>a) {

		x++;
	}
	
	return x;
}

int function_3(int a, int b, int c) {
	int argX;
	int arrayArg[3];
	for (int i = 0; i < 3; i++) {

		cout << "Введите значение " << i + 1 << "-го числа" << endl;
		cin >> argX;
		arrayArg[i] = argX;
	}

	int sum = a + b + c;
	int* px = arrayArg;
	return 0;
}

int main() {
	setlocale(LC_CTYPE, "Russian");
	//string1();
	//pointer();
	//d();
	//pointerArray();
	/*int y = 10;
	int x = max(5*10, y*y+6)*max(sqrt(y),1);
	cout << "max = " << x << endl;*/
//	printf_s("Сумма всех четных чисел в диапазоне от 123 до 347 = %d  \n\n", function_1());


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
	
	printf_s("Являеся ли третий элемент меньше второго и больше первого : %d \n\n", function_2(a, b, c));
	//printf_s("Являеся ли третий элемент меньше второго и больше первого : %d \n\n", function_2(3, 10, 5));
	system("pause");
	return 0;

}