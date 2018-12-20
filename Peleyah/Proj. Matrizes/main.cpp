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
		        cout << ("\n | MENU | Exe 1 - FT4 | MENU");
		        cout << ("\n1-Ler Matriz");
		        cout << ("\n2-Escrever Matriz");
		        cout << ("\n3-Matriz Quadrada?");
		        cout << ("\n4-Maior Elemento Linha");
		        cout << ("\n5-Maior Elemento Coluna");
		        cout << ("\n6-Soma");
		        cout << ("\n7-Centro");
				cout << ("\n0-Sair");
		        cout << ("\n\nEscolha a opcao:");
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
				case '6':{
						int la,ca,lb,cb,i,j;
						
						do{
							cout << ("Numero de linhas da matriz A: ");
							cin >> (la);
							cout <<("Numero de colunas da matriz A: ");
							cin >>(ca);
							
							cout << ("Numero de linhas da matriz B: ");
							cin >> (lb);
							cout <<("Numero de colunas da matriz B: ");
							cin >>(cb);
							if(ca!=cb && la!=lb){
								cout << ("Para somar matrizes o número de linhas tem de ser igual ao número de colunas.");
							}
						
						}while(ca!=cb && la!=lb);
						
						if(la==lb && ca==cb){
							int ** matA = new int * [la];
							int ** matC = new int * [la];
							for(int i=0; i<la; i++){
								for(int j=0; j<ca; j++){
									matA[i] = new int [ca];
									matC[i] = new int [ca];
									cout << "MatrizA["<< i+1 << "]["<< j+1 << "]: ";
									cin >> (matA[i][j]);
								}
							}
							int ** matB = new int * [lb];
							for(int i=0; i<lb; i++){
								for(int j=0; j<cb; j++){
									matB[i] = new int [cb];
									cout << "MatrizB["<< i+1 << "]["<< j+1 << "]: ";
									cin >> (matB[i][j]);
								}
							}
							
							matC = Matrizes::soma(la, lb, ca, cb, matA, matB);
						}
						
		                 break;
		          		}
		          	case '7':{Matrizes::centro(l, c, mat);
		                 break;
		          		}
		        	}    
		        }while(opc!='0');
	
	

	
	
	return 0;
	
}



