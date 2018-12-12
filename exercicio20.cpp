#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	int num,maior,c=0;
	bool p=false;
	
	while(c<5) {
		cout << "\nDigite um numero: ";
		cin >> num;
		if(num%2==0){
			if(p){
				if(num>maior){
					maior=num;
				}
			} else {
				maior=num;
				p=true;
			}
		} else {
			c++;
		}
	}
	
	if(p) {
		cout << "\n\nMaior numero par: " << maior;
	} else {
		cout << "\n\nNao foi inserido nenhum numero par.";
	}
    return 0;
}
