#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    
    do {
    	cout << "Digite um numero com tres digitos:";
    	cin >> x;
    	if(x<100 || x>999)
    		cout << "Numero invalido\n\n";
	}while(x<100 || x>999);

    cout << to_string(x/100) + " " + to_string((x%100 - x%10)/10) + " " + to_string(x%10);
    
    return 0;
}
