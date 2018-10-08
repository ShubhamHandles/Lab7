//Q.4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.

#include<iostream>
using namespace std;

//x = n+n-1+...+1
int AP1(int a){
	if(a!=0)
	return a+AP1(a-1);
}

int main(){

	int a;

	//input
	cout << "Enter the last(nth) number :" << endl;
	cin >> a;

	//output using function
	cout << "Sum of all natural numbers between 1 to n is : " << AP1(a) << endl;

	return 0;

}
