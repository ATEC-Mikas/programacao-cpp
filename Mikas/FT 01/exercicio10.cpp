#include <iostream>
#include <string>

using namespace std;

int main()
{
 	int x,soma=0;
 	
 	cout << "Numero de horas trabalhadas:";
 	cin >> x;
 	
 	if(x>36) {
 		cout << "\nSalario: "+to_string(270+((x-36)*10));
	 } else {
	 	cout << "\nSalario: "+to_string(x*7.5);
	 }
    
    return 0;
}
