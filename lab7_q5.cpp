//Q.5. Write a C++ program to find sum of all even or odd numbers in given range using recursion.

#include<iostream>
using namespace std;

//f(m,n)=n/n-1+n-2/n-3+...+m-1/m

int sEven(int a, int b){
	//convert function into sum
	if(b%2==0 and b>=a){
		return b+sEven(a,b-2);
	}
	else if(b%2!=0 and b>=a){
		b--;
		return b+sEven(a,b-2);
	}
	else {
		return 0;
	}
}

int sOdd(int a, int b){
	//convert function into sum
	if(b%2!=0 and b>=a){
		return b+sOdd(a,b-2);
	}
	else if(b%2==0 and b>=a){
		b--;
		return b+sOdd(a,b-2);
	}
	else {
		return 0;
	}
}

int main(){

	int x,y;

	//input
	cout << "Enter the first number of your range :" << endl;
	cin >> x;
	cout << "Enter the last number of your range :" << endl;
	cin >> y;
	
	//output using function
	cout << "Sum of all even numbers in your range is : " << sEven(x,y)<< endl;
	
	cout << "Sum of all odd numbers in your range is : " << sOdd(x,y)<< endl;

	return 0;
	
}
