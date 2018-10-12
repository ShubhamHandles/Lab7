//Q.9. Write a C++ program to find factorial of any number using recursion.


#include<iostream>
using namespace std;

//n!= n*n-1*...*1
int facN(int a){
	
	//terminate
	if (a==0){
		return 1;
	}
	//find factorial	
	else {
		return a*facN(a-1);//recursion
	}
}

int main(){
	
	int n;
	//input
	cout << "Enter your number :" << endl;
	cin >> n; 
	//output
	cout << n << "!(factorial)" <<" is : " << facN(n) << endl;

	return 0;
	
}
