#include "Atleta.h"

int main() {
	
	Atleta a1;
	cout << a1.toString() << "\n";
	Atleta a2(5,"Mikas",5,1);
	cout << a2.toString() << "\n";
	cout << to_string(a2.calcPremio(1));
	
	return 0;
}
