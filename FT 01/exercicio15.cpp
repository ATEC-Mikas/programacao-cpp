#include <iostream>
#include <string>

using namespace std;

int main()
{

	float x;
	int y;

	cout << "Salario atual: ";
	cin >> x;
	
	cout << "Codigo de cargo:";
	cin >> y;
	
	switch(y) {
		case 101:
			cout << "\nSalario atual: " << x << "\nSalario novo:" << x*1.25 << "\nDiferenca:" << (x*1.25)-x;
			break;
		case 102:
			cout << "\nSalario atual: " << x << "\nSalario novo:" << x*1.2 << "\nDiferenca:" << (x*1.2)-x;
			break;
		case 103:
			cout << "\nSalario atual: " << x << "\nSalario novo:" << x*1.15 << "\nDiferenca:" << (x*1.15)-x;
			break;
		default:
			cout << "\nSalario atual: " << x << "\nSalario novo:" << x*1.1 << "\nDiferenca:" << (x*1.1)-x;
			break;
	}

    return 0;
}
