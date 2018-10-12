//Q.7. Write a C++ program to check whether a number is palindrome or not using recursion.

#include<iostream>
using namespace std;

int ReverseN(int a,int b){
		
	int A;
	//breaking
	if (a==0){
	return b;
	}
	//reversing a number
	else {
	A=a%10;
	b=b*10+A;
	a=a/10;
	//recursion
	return ReverseN(a,b);
	}	
}

int main(){
	
	//input
	int n,r;
	cout << "Enter a number to check if it's a palindrome :" << endl;
	cin >> n;

	r = ReverseN(n,0);

	//output
	if(n==r){
		cout << "Yup! your number is a palindrome." << endl;
	}
	else {
		cout << "Nope! your number is not a palindrome." << endl;
	}
	
	return 0;
}



