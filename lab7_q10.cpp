//Q.10. Write a C++ program to generate nth Fibonacci term using recursion.


#include<iostream>
using namespace std;

//Fibonacci series = 0,1,1,2,3,5,...,x,y,x+y
int tnFbnc(int a, int b, int c){
	//terminate
	if (c==1){
	}
	//nth Fibonacci term
	else {
		return tnFbnc(b,a+b,c-1); //recursion 
	}
}

int main(){
	
	int n;
	//input 
	cout << "Enter 'n' for the nth Fibonacci term you want : " << endl;
	cin >> n;
	//output 
	cout << "The " << n << "th Fibonacci term is : " << tnFbnc(0,1,n)<< endl;	

	return 0;
}
