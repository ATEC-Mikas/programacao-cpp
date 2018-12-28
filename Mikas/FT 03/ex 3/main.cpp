#include "Data.h"

int main(){
	int r;
	Data d1;
	d1.setAno(1990);
	d1.setDia(21);
	d1.setMes(8);
	cout << d1.toString() << "\n";
	Data d2(1,2,1440);
	cout << d2.toString() << "\n";
	Data d3(d2);
	cout << d3.toString() << "\n";
	r=d2.setDia(32);
	if(r==0) {
		cout << "Dia mudado com sucesso.\n"<<d2.toString()<<"\n";
	} else {
		cout << "Erro detetado, Mensagem dada:\n\t" << r << " - " << Data::lidarErro(r)<<"\n";
	}
	
	cout << "Diff anos: "<< d2.difEntre2anos(d2) << "\n";
	return 0;
}
