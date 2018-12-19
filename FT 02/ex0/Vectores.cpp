#include "Vectores.h"


void Vectores::lerVector(int n, int * vec) {
	for(int i=0;i<n;i++) {
		cout << "Vec[" << i+1 << "]=";
		cin >> vec[i];
	}
}

double Vectores::mediaVector(int n,int *vec) {
	double soma=0,media;
	for(int i=0;i<n;i++){
		soma+=vec[i];
	}
	media=soma/n;
	return media;
}

void Vectores::mostrarVector(int n, int * vec) {
	for(int i=0;i<n;i++) {
		cout << "Vec[" << i+1 << "]=" << vec[i] << "\n";
	}
}

int Vectores::eliminarPosicao(int n, int * vec, int pos) {
	for(int i=pos;i<n-1;i++){
		vec[i]=vec[i+1];		
	}
	
	return n-1;
}

int Vectores::eliminarElemento(int n, int * vec, int elem) {
	int c=0;
	for(int i=0;i<n;i++){
		if(vec[i]==elem){
			Vectores::eliminarPosicao(n,vec,i);
			c++;
		}
	}
	
	return n-c;
}

int Vectores::segundoMaiorValor(int n,int* vec) {
	int maior=0,segundomaior;
	
	bool flag=false;
	
	for(int i=1;i<n;i++){
		if(vec[i]>vec[maior]) {
			segundomaior=maior;
			maior=i;
			flag=true;
		} else {
			if(flag) {
				if(vec[i]>vec[segundomaior]) {
					segundomaior=i;
				}
			} else {
				if(vec[i]!=vec[maior]) {
					segundomaior=i;
					flag=true;
				}	
			}
		}
	}
	return segundomaior;
}

int * Vectores::ordenarVector(int n, int* vec) {
	int * vetor=new int[n];
	int aux;
	vetor=Vectores::copiarVetor(n,vec); 
	for(int i=0;i<n;i++) {
		for(int j=0;j<n-1;j++) {
			if(vetor[i]>vetor[j]){
				aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
		}
	}
	return vetor;
}

int * Vectores::copiarVetor(int n, int* vec) {
	int * vetor=new int[n];
	for(int i=0;i<n;i++){
		vetor[i]=vec[i];
	}
	return vetor;
}

int Vectores::posicoesHomologas(int n, int* vec1, int* vec2) {
	int c=0;
	for(int i=0;i<n;i++){
		if(vec1[i]==vec2[i]) {
			c++;
		}
	}
	return c;	
}
