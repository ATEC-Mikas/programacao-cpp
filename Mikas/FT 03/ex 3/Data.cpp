#include "Data.h"

	Data::Data() {
		ano=2000;
		mes=1;
		dia=1;
	}
	
	Data::Data(int d,int m, int a) {
		
		if(m<=0 || m>12) {
			throw invalid_argument( "Mes invalido" );
		}
		if(a<=0 || a>2019){
			throw invalid_argument( "Ano invalido" );
		}
		if(d<=0 || d>31) {
			throw invalid_argument( "Dia invalido" );
		}
		if(m<8 && m!=2) {
			if(m%2==0 && d<=30) {
				ano=a;
				mes=m;
				dia=d;	
			}
			else {
				if(m%2==1 && d<=31) {
					ano=a;
					mes=m;
					dia=d;
				}
				else {
					throw invalid_argument( "Mes invalido devido ao dia" );
				}
			}
		} else {
			if(m>=8 && m!=2) {
				if(m%2==1 && d<=30) {
					ano=a;
					mes=m;
					dia=d;		
				}
				else {
					if(m%2==0 && d<=31) {
						ano=a;
						mes=m;
						dia=d;
					}
					else {
						throw invalid_argument( "Mes invalido devido ao dia" );
					}
				}
			}
		}
		if(m==2) {
			if(a%4==0 && d<=29){
				ano=a;
				mes=m;
				dia=d;
			} else {
				if(a%4==1 && d<=28){
					ano=a;
					mes=m;
					dia=d;
				} else {
					throw invalid_argument( "Mes invalido devido ao dia e ano" );
				}
			}
		}		
	}
	
	Data::Data(const Data &d) {
		ano=d.ano;
		mes=d.mes;
		dia=d.dia;
	}
	
	int Data::setAno(int x) {
		if(x<=0) {
			return 11; //Ano invalido
		}
		if(mes==2 && dia==29 && x%4!=0){
			return 12; // Ano invalido devido a ser dia 29/2 num ano nao bissexto
		}
		ano=x;
		return 0;
	}
	
	int Data::setMes(int x) {
		if(x<=0 || x>12) {
			return 21; //Mes invalido
		}
		if(x<8 && x!=2) {
			if(x%2==0 && dia<=30) {
				mes=x;		
			}
			else {
				if(x%2==1 && dia<=31) {
					mes=x;
				}
				else {
					return 22;//Mes invalido devido ao dia
				}
			}
		} else {
			if(x>=8 && x!=2) {
				if(x%2==1 && dia<=30) {
					mes=x;		
				}
				else {
					if(x%2==0 && dia<=31) {
						mes=x;
					}
					else {
						return 22;//Mes invalido devido ao dia
					}
				}
			}
		}
		if(x==2) {
			if(ano%4==0 && dia<=29){
				mes=x;
			} else {
				if(ano%4==1 && dia<=28){
					mes=x;
				} else {
					return 23;//Mes invalido devido ao dia e ano
				}
			}
		}
		return 0;
	}
	
	int Data::setDia(int x) {
		if(x<=0 || x>31) {
			return 31; //Dia invalido
		}
		if(mes<8 && mes!=2) {
			if(mes%2==0 && x<=30) {
				dia=x;		
			}
			else {
				if(mes%2==1 && x<=31) {
					dia=x;
				}
				else {
					return 32;//Dia invalido devido ao mes
				}
			}
		} else {
			if(mes>=8 && mes!=2) {
				if(mes%2==1 && x<=30) {
					dia=x;		
				}
				else {
					if(mes%2==0 && x<=31) {
						dia=x;
					}
					else {
						return 32;//Dia invalido devido ao mes
					}
				}
			}
		}
		if(mes==2) {
			if(ano%4==0 && x<=29){
				dia=x;
			} else {
				if(ano%4==1 && x<=28){
					dia=x;
				} else {
					return 33;//Dia invalido devido ao ano e mes
				}
			}
		}
		return 0;
	}
	
	int Data::getAno() {
		return ano;
	}
	
	int Data::getMes() {
		return mes;
	}
	
	int Data::getDia() {
		return dia;		
	}
	
	string Data::toString() {
		return "Data de nascimento: "+to_string(dia)+"/"+to_string(mes)+"/"+to_string(ano)+".";
	}
	
	
	int Data::difEntre2anos(const Data &d) {
		return d.ano-ano;
	}
	
	
	// Nao instanciadas
	string Data::lidarErro(int x) {
		switch(x) {
			case 11:
				return "Ano invalido";
				break;
			case 12:
				return "Ano invalido devido a ser dia 29/2 num ano nao bissexto";
				break;
			case 21:
				return "Mes invalido";
				break;
			case 22:
				return "Mes invalido devido ao dia";
				break;
			case 23:
				return "Mes invalido devido ao dia e ano";
				break;				
			case 31:
				return "Dia invalido";
				break;
			case 32:
				return "Dia invalido devido ao mes";
				break;
			case 33:
				return "Dia invalido devido ao ano e mes";
				break;
			case 0:
				return "Sem erro detetado.";
				break;
			default:
				return "Numero de erro desconhecido";
				break;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
