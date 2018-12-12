#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	int n=0,num,soma=0;
	
	while(n<5 || soma<100) {
		cout << "Digite um numero:";
		cin >> num;
		n++;
		soma+=num;
	}
	
	cout << "Soma: " << soma << "\n" << n << " numeros inteiros";
	
    return 0;
}
