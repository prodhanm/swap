#include <iostream>  

using namespace std;  

int swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return a, b;
}

void main() {  
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	swap(a, b);
	cout << "After swapping: a = " << a << ", b = " << b << endl;
}
