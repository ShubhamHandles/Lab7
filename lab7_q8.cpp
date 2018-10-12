//Q.8. Write a C++ program to find sum of digits of a given number using recursion.


#include<iostream>
using namespace std;

//123->3+2+1+0
int sumD(int a){
	
	//terminate
	if (a==0){
		return 0;
	}
	//add digits	
	else {
		int x;
		x = a%10;
		return x + sumD(a/10);//recursion 
	}
}

int main(){

	int n;
	//input
	cout << "Enter your number :" << endl;
	cin >> n; 
	//output
	cout << "Sum of the digits your number is : " << sumD(n) << endl;

	return 0;
	
}
