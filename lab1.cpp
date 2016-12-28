//============================================================================
// Name        : lab 1
// Author      : tester
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
const double e=2.71828;
int main() {
	int a, b, x;
	double z;
	 cout<<"Введите параметр a: ";
	 cin>>a;
	 cout<<"Введите параметр b: ";
	 cin>>b;
	 cout<<"Введите аргумент x: ";
	 cin>>x;
	 if (x <= a){
		 z = pow((1 + cosh(x) + tanh(pow(x, 2))), sin(x) + cos(x));
	 } else if (a < x && x < b) {
		 z = 7.3 * pow(x, 3.17 * x + 5) + atan(pow(x, -2 * log10(x)));
	 } else {
		 z = pow(abs(asin(x)+ pow(e, x)), 1 + 5*pow(sin(x), 2)) + pow(abs(1 - x), 1/2);
	 }
	 cout.setf(ios::scientific, ios::floatfield);
	 cout<<"Значение функции z = f(x) = "<<z<<endl;
	 cout<<"Нажмите любую клавишу...";
	 return 0;
}

