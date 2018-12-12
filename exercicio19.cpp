#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x,y,num,c=0,i;
	
	cout << "Quantos alunos:";
	cin >> x;
	
	cout << "Que idade a ser superior:";
	cin >> y;
	
	for(i=0;i<x;i++) {
		cout << "\nIdade:";
		cin >> num;
		if(num>y) {
			c++;
		}
	}
	
	cout << "\nAlunos com idade superior a " << y << ": " << c;
	

    return 0;
}
