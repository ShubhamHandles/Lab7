//Q.1. Write a C++ program to find power of any number using recursion.

#include<iostream>
using namespace std;

//x = a^b = a*a^(b-1)

int power(int a, int b){ 
	if (b==0){
		return 1;
	}
	else {
	return a*power(a,b-1);
	}
}

int main(){ 
	
	int a,b;
	
	//input
	cout << "Enter the base number :" << endl;
	cin >> a;
	cout << "Enter the exponent :" << endl;
	cin >> b;

	//output using function
	cout << "The power of your number is : " << power(a,b) << endl;
	return 0;
}
