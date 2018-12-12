#include <iostream>
#include <string>

using namespace std;

int main()
{

 	int x,y,i,aux;
 	
 	cout << "Digite um numero: ";
 	cin >> x;
 	
 	cout << "Digite outro numero: ";
 	cin >> y;
 	
 	if(y<x) {
 		aux=x;
 		x=y;
 		y=aux;
	}
 	
	if(x%2==0) {
 		for(i=x;i<=y;i+=2) {
 			cout << " " << i << " ";
		 }
	} else {
		for(i=x+1;i<=y;i+=2) {
 			cout << " " << i << " ";
		 }		
	}

    return 0;
}
