#include "Matrizes.h"

int l=0,c=0;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	
	cout << "Número de linhas matriz? ";
	cin >> (l);
	cout << "Número de colunas matriz? ";
	cin >>	(c);

	
	int ** mat = new int * [l];
	
	for(int i=0; i<l; i++){
			
			mat[i] = new int [c];
			
	}

		char opc;
		    
		    do {
		        system("CLS");
		        printf("\n | MENU | Exe 1 - FT4 | MENU");
		        printf("\n1-Ler Matriz");
		        printf("\n2-Escrever Matriz");
		        printf("\n3-Matriz Quadrada?");
		        printf("\n4-Maior Elemento Linha");
		        printf("\n5-Maior Elemento Coluna");
				printf("\n0-Sair");
		        printf("\n\nEscolha a opcao:");
		        opc=getchar();
		        switch(opc){
		        case '1':{mat = Matrizes::lerMatriz(l, c);
					break;
					}
				case '2':{Matrizes::escreverMatriz(l, c, mat);
						break;
						}
		        case '3':{Matrizes::matrizQuadrada(l, c);
		                    break;
			            }
			    case '4':{Matrizes::maiorElementoLinha(l, c, mat);
					break;
				}
		        case '5':{Matrizes::maiorElementoColuna(l, c, mat);
		                 break;
		          		}
		        	}     
		        }while(opc!='0');
	
	

	
	
	return 0;
	
}



