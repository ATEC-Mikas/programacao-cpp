#include "Vectores.h"

using namespace std;

int main(){
	
	_tsetlocale(LC_ALL, _T("portuguese"));
  	
	int n;
	int * a = new int[n];  
	  	
		char opc;
		    
		    do {
		        system("CLS");
		        cout << ("\n | MENU | Exe 1 - FT4 | MENU");
		        cout << ("\n1-Ler N");
		        cout << ("\n2-Ler o vetor");
		        cout << ("\n3-Escrever o vector lido");
		        cout << ("\n4-Escrever o vector lido inversamente ");
		        cout << ("\n5-Devolver a posição do maior elemento do vetor");
		        cout << ("\n6-Devolver a posição do menor elemento do vetor.");
		        cout << ("\n7-Devolver quantos valores do vetor que são maiores que os seus dois vizinhos. Excluem-se as extremidades..");
		        cout << ("\n8-Devolver qual a maior diferença entre 2 elementos consecutivos");
		        cout << ("\n9-Média ímpares");
		        cout << ("\na-Número de elementos múltiplos de 3");
		        cout << ("\nb-Elementos comuns dois vetores");
		        cout << ("\nc-Vetor ordenado");
		       	cout << ("\nd-Apagar posição");
		        cout << ("\ne-Apagar elemento");
		        cout << ("\nf-Posições homologas");
		        cout << ("\ng-Segundo maior");
				cout << ("\n0-Sair");
		        cout << ("\n\nEscolha a opcao:");
		        opc=getchar();
		        switch(opc){
			        case '1':{n=Vectores::lerN();
						break;
						}
					case '2':{a=Vectores::lerVecN(n);
						break;
						}
			        case '3':{Vectores::escreverVecN(n,a);
			                    break;
			            }
			        case '4':{Vectores::escreverInversamenteVecN(n, a);
			                    break;
			            }
			        case '5':{Vectores::posMaior(n, a);
			                  break;
			            }
			        case '6':{Vectores::posMenor(n, a);
			                 break;
			          	}
			        case '7':{Vectores::nValoresMaioresQueVizinhos(n, a);
			                 break;
			          	}
			        case '8':{Vectores::maiorDifEntre2(n, a);
			                 break;
			          	}
			        case '9':{Vectores::mediaImpares(n, a);
						break;
						}
					case 'a':{Vectores::multiplos3(n, a);
						break;
						}
					case 'b':{Vectores::elementosComuns();
						break;
						}
					case 'c':{Vectores::vecOrdenado(n, a);
						break;
						}
					case 'd':{n=Vectores::eliminaPosicao(n, a);
						break;
						}
					case 'e':{n=Vectores::eliminaElemento(n, a);
						break;
						}
					case 'f':{Vectores::posicoesHomologas();
						break;
						}
					case 'g':{Vectores::segundoMaiorValor(n, a);
						break;
						}
		        	}     
		        }while(opc!='0');
	
	return 0;
	
}
