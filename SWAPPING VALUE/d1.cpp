#include<iostream>
using namespace std;
int main()
{
	 
	int num1=30;
	int num2=40;
	int temp=num1;
	
	
	num1=num2;
	num2=temp;
	
    cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	
	
	return 0;
}