#include "Vectores.h"

void Vectores::lerVector(int n, int * vec) {
	for(int i=0;i<n;i++) {
		cout << "Vec[" << i+1 << "]=";
		cin >> vec[i];
	}
}

void Vectores::mostrarVector(int n, int * vec) {
	for(int i=0;i<n;i++) {
		cout << "Vec[" << i+1 << "]=" << vec[i] << "\n";
	}
}

void Vectores::mostrarVectorContador(int * vec) {
	for(int i=1;i<=vec[0];i++) {
		cout << "Vec[" << i << "]=" << vec[i] << "\n";
	}
}

void Vectores::mostrarVectorInverso(int n, int * vec) {
	for(int i=n-1;i>=0;i--) {
		cout << "Vec[" << i+1 << "]=" << vec[i] << "\n";
	}
}

int Vectores::maiorElemento(int n, int * vec) {
	int maior=0;
	for(int i=1;i<n;i++) {
		if(vec[maior]<vec[i]){
			maior=i;
		}
	}
	return maior;
}

int Vectores::menorElemento(int n, int * vec) {
	int menor=0;
	for(int i=1;i<n;i++) {
		if(vec[menor]>vec[i]){
			menor=i;
		}
	}
	return menor;	
}

int Vectores::maiorVizinhos(int n, int * vec) {
	int c=0;
	for(int i=1;i<n-1;i++){
		if(vec[i]>vec[i-1] && vec[i]>vec[i+1]) {
			c++;
			i++;
		}
	}
	return c;
}

int Vectores::maiorDiferenca(int n, int * vec) {
	int maior=-1,x;
	for(int i=0;i<n-1;i++) {
		x=abs(vec[i]-vec[i+1]);
		if(x>maior){
			maior=x;
		}
	}
	return maior;
}

float Vectores::mediaImpares(int n, int * vec) {
	int soma=0,c=0;
	for(int i=0;i<n;i++){
		if(vec[i]%2==1) {
			c++;
			soma+=vec[i];
		}
	}
	return (float)soma/c;
}

int Vectores::multiplos(int n, int * vec, int multiplo) {
	int c=0;
	for(int i=0;i<n;i++) {
		if(vec[i]%multiplo==0) {
			c++;
		}
	}
	return c;
}

int * Vectores::elementosComuns(int n1, int * vec1, int n2, int * vec2) {
	bool flag;
	int c=0;
	int * vec3 = new int[n1];
	for(int i=0;i<n1;i++) {
		flag=true;
		for(int j=0;j<i;j++) {
			if(vec1[i]==vec1[j]){
				flag=false;
			}
		}
		if(flag) {
			for(int j=0;j<n2;j++) {
				if(vec1[i]==vec2[j]){
					vec3[c+1]=vec1[i];
					c++;
					break; 
				}
			}
		}
	}
	vec3[0]=c;
	return vec3;
}

int * Vectores::ordenarCrescente(int n, int * vec) {
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
