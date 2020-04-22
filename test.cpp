#include <iostream>
using namespace std;

void findFibonacci(int pos);
int main(){
	
	int position;
	cout << "Enter the position of the desired Fibonacci number: ";
	cin >> position;
	cout << "The Fibonacci number at position " << position << " is: ";
	findFibonacci(position - 1);
	return 0;
}
void findFibonacci(int pos){
	static int n1 = 0, n2 = 1, n3;
	int counter = 0;
	if(pos > 0){
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if(counter == pos - 1){
			cout << n3 << " ";
		}
		findFibonacci(pos - 1);
		counter++;
	}
}
