#include <iostream>
#include <string>
#include <iomanip>      // std::setprecision

using namespace std;

int main()
{

	float x;
	
	cout << "Digite o saldo medio:";
	cin >> x;
	
	cout << "\nSaldo medio: " << x << "\nValor do credito: ";
	if(x>600) {
		cout << x*0.4;
	} else {
		if(x>400) {
			cout << x*0.3;
		} else {
			if(x>200) {
				cout << x*0.2;
			} else {
				cout << 0;
			}
		}
	}

    return 0;
}
