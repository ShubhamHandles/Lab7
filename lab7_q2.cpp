//Q.2. Write a C++ program to print all natural numbers between 1 to n using recursion.


#include<iostream>
using namespace std;

//x = n,n-1,...,2,1
void AP1(int a){
	if(a!=0){
	AP1(a-1); 
	cout << a << endl;
	}
}

int main(){

	int b;

	//input
	cout << "Enter the last(nth) number :" << endl;
	cin >> b;

	//output using function
	cout << "All natural numbers from 1 to " << b << " are : "  << endl;
	AP1(b);

	return 0;

}
