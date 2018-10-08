//Q.6. Write a C++ program to find reverse of any number using recursion.

#include<iostream>
using namespace std;

//12345 -> 54321
int ReverseN(int N){
	
	if(N==0){
		cout << endl;
		return 0;
	}
	else {
		int r;
		//print last digit
		r = N%10;
		cout << r;
		
		//divide the number by 10 and store it into the parameter
		N/=10;
		
		//use recursion to repeat
		return ReverseN(N);
	}	
}

int main(){
	
	//input
	int n;
	cout << "Enter the integer whose digits need to be reversed :" << endl;
	cin >> n;
	
	//output
	cout << "The reversed number is : " << endl;
	ReverseN(n);
	
	return 0;
}

