#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num,n=0,soma=0;
	
	cout << "Insira um numero: ";
	cin >> num;
	
	while(num!=0) {
		n++;
		soma+=num;
		cout << "\nInsira outro numero: ";
		cin >> num;
	}
	
	cout << "Soma: " << soma << "\nMedia: " << (float)soma/n;

    return 0;
}
