#include <iostream>
#include <string>

using namespace std;

int main()
{
    float x,y;
    
    cout << "Digite o valor a pagar:";
    cin >> x;
    
    do {
    	cout << "Digite o valor dado:";
    	cin >> y;	
    	if(y<x)
    		cout << "Valor insuficiente";
	} while(y<x);

    cout << "Valor a dar de troco: "+ to_string((y-x)*0.90);
    
    return 0;
}
