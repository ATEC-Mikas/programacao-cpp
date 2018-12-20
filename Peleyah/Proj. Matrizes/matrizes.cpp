#include "Matrizes.h"

int ** Matrizes::lerMatriz(int l, int c){
	
	int ** mat = new int * [l];
	
	for(int i=0; i<l; i++){
			
			mat[i] = new int [c];
			
			for(int j=0; j<c; j++){
				cout << "Matriz["<< i+1 << "]["<< j+1 << "]: ";
				cin >> (mat[i][j]);
			}
	}
	system("PAUSE");
	return mat;
	
}

int ** Matrizes::escreverMatriz(int l, int c, int** mat){
	
	
	for(int i=0; i<l; i++){
			
			for(int j=0; j<c; j++){
				cout << "Matriz["<< i+1 << "]["<< j+1 << "]: " << (mat[i][j]) << "\n";
			}
	}
	system("PAUSE");
	
}

int Matrizes::matrizQuadrada(int l, int c){
	
	_tsetlocale(LC_ALL, _T("portuguese"));
	
	if(l==c){
		cout << "Matriz quadrada.\n";
	}else{
		cout << "Matriz n e quadrada, nlinhas!=colunas\n";
	}
	system("PAUSE");
}

int Matrizes::maiorElementoLinha(int l, int c, int ** mat){

	int line;
	
	cout << "Linha: ";
	cin >> line;

	int max = mat[line][0];
    for (int i = 0; i < l; i++)
    {
    	if (mat[line][i] > max)
            {
            	max = mat[line][i];
            }
    }
    cout << max << "\n";
	system("PAUSE");
    
    
}


int ** Matrizes::soma(int la, int lb, int ca, int cb, int** matA, int** matB){
	
	
	int ** matC = new int * [la];
	
	for(int i=0; i<100; i++){
			
			matC[i] = new int [ca];

	}
	
	if(la==lb && ca==cb){
		
		for(int i=0; i<la; i++){
			for(int j=0; j<ca; j++){
				matC[i][j] = matA[i][j] + matB[i][j];
			}
		}
		for(int i=0; i<la; i++){
			for(int j=0; j<ca; j++){
				cout << "Matriz["<< i+1 << "]["<< j+1 << "]: " << (matC[i][j]) << "\n";
			}
		}
	}

	
	
	system("PAUSE");
	
	return matC;
	
}


int* Matrizes::centro(int l, int c, int** mat){
	
	if(l % 2 == 0){ //Linha par
		if(c % 2 == 0){ //Coluna par
			cout << (mat[l/2-1][c/2-1], mat[c/2][c/2-1], mat[l/2-1][c/2], mat[l/2][c/2]) << "\n";
		}
		else{ //Coluna impar
			cout << (mat[l/2-1][c/2], mat [l/2][c/2]) << "\n";
		}
	}
	else{ //Linha impar
		if(c % 2 == 0){ //Coluna par
			cout << (mat[l/2][c/l-1], mat[l/2][c/l]) << "\n";
		}
		else{ //Coluna impar
			cout << (mat[l/2][c/2]) << "\n";
		}
	}
	system("PAUSE");
}


int Matrizes::maiorElementoColuna(int l, int c, int ** mat){
	
	int col;
	
	cout << "Coluna: ";
	cin >> col;
	
	int max = mat[0][col];
    for (int i = 0; i < c; i++)
    {
             if (mat[i][col] > max)
             {
                max = mat[i][col];
             }
        }
    
	cout << max << "\n";
	system("PAUSE");
	
	}
	
