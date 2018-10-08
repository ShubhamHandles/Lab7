//Q.3. Write a C++ program to print all even or odd numbers in given range using recursion.

#include<iostream>
using namespace std;

//x = n,n-2,...,2,1
void pEven(int a, int b){
	//print number
	if(a%2==0 and a<=b){
		cout << a << endl;
		//+2
		a = a+2;
		//repeat by recursion
		pEven(a,b);
	}
	else if(a%2!=0 and a<=b) {
		int c = a+1;
		if (c<=b){
			cout << c << endl;
			//+2
			a = a+2;
			//repeat by recursion
			pEven(a,b);
		}
	}
}

void pOdd(int a, int b){
	//print number
	if(a%2!=0 and a<=b){
		cout << a << endl;
		//+2
		a = a+2;
		//repeat by recursion
		pOdd(a,b);
	}
	else if(a%2==0 and a<=b) {
		int c = a+1;
		if (c<=b){
			cout << c << endl;
			//+2
			a = a+2;
			//repeat by recursion
			pOdd(a,b);
		}
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
	cout << "All even numbers in your range are : " << endl;
	pEven(x,y);

	cout << "All odd numbers in your range are : " << endl;
	pOdd(x,y);

	return 0;
	
}




