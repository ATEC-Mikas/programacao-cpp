#include "Vectores.h"

int * Vectores::ordenarVector(int n, int a[]){
	
	int i,j,aux;
	
	int * vec_ordenado= new int[n];
	
	for(i=0; i<n; i++){
		vec_ordenado[i] = a[i];
	}
	
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(vec_ordenado[i] > vec_ordenado[j]){
				aux = vec_ordenado[i];
				vec_ordenado[i] = vec_ordenado[j];
				vec_ordenado[j] = aux;
			}
		}
	}
	
	for(i=0; i<n; i++){
		cout << (vec_ordenado[i]);
	}
	
	cout << "\n";
	system("PAUSE");
	getchar();
	return vec_ordenado;
	
}

int Vectores::eliminaPosicao(int n, int a[]){
	
	int p;
	
	printf("Qual a posicao que quer apagar: ");
	scanf("%d",&p);
	
	
	for(int i=p;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
	
	cout << "Listagem vetor: \n";
	escreverVecN(n, a);
	printf("Eliminado,prima qualquer tecla para voltar ao menu anterior...");
	getchar();
	return n;
}

int Vectores::eliminaElemento(int n, int a[]){
	
	int e, pe;
	
	printf("Qual o elemento que pretende apagar: ");
	scanf("%d",&e);
	
	
	for(int i=0;i<n;i++){
		if(e == a[i]){
			a[i]=a[i+1];	
		}
	}
	n--;
	
	cout << "Listagem vetor: \n";
	escreverVecN(n, a);
	printf("Eliminado,prima qualquer tecla para voltar ao menu anterior...");
	getchar();
	return n;
}

int Vectores::lerN(){
	
	int n;
	
	do{
		cout << ("Qual o valor de N? ");
		cin >> (n);
	}while(n<=0);
	
	getchar();
	return n;
}


int * Vectores::lerVecN(int n){
	
	int * a = new int[n];
	int i;
	
	for(i=0; i<n; i++){
		cout << "Elemento [" << i+1 << "] :";
		cin >> (a[i]);
	}
	
	getchar();
	return a;
	
}

int Vectores::escreverVecN(int n, int a[]){
	
	int i;
	
	for(i=0; i<n; i++){
		cout << (a[i]) << "\n";
	}
	
	system("PAUSE");
	getchar();
	return 0;
	
}

int Vectores::escreverInversamenteVecN(int n, int a[]){
	
	int i;
	
	for(i=n-1; i>-1; i--){
		cout << (a[i]) << "\n";
	}
	
	system("PAUSE");
	getchar();
	return 0;
	
}

int Vectores::posMaior(int n, int a[]){
	
	int posMaior = 0, maior=a[0], i;
	
	for(i=0; i<n; i++){
		if(a[i] > maior){
			maior= a[i];
			posMaior = i;
		}
	}
	
	escreverVecN(n, a);
	cout << "Posição maior = " << (posMaior + 1) << "\n";
	
	getchar();
	return 0;
}

int Vectores::posMenor(int n, int a[]){
	
	int posMenor = 0, menor=a[0], i;
	
	for(i=0; i<n; i++){
		if(a[i] < menor){
			menor = a[i];
			posMenor = i;
		}
	}
	
	
	escreverVecN(n, a);
	cout << "\nPosição menor = "<< (posMenor + 1) << "\n";
	
	getchar();
	return 0;
}

int Vectores::nValoresMaioresQueVizinhos(int n, int a[]){
	
	int i,cmv=0;
	
	
	int * vmv= new int[n];
	
	for(i=1; i<n-1; i++){
		if(a[i-1] < a[i] && a[i+1] < a[i]){
			vmv[cmv] = a[i];
			cmv++;
			i++;
		}
	}
	
	for(i=0; i<cmv; i++){
		cout << (vmv[i]) << " ";
	}
	
	escreverVecN(n, a);
	cout << "\nNumero de valores que sao maiores que os seus vizinhos: " << cmv;
	
	getchar();
	return 0;
}

int Vectores::maiorDifEntre2(int n, int a[]){
	
	_tsetlocale(LC_ALL, _T("portuguese"));
	
	int i,maxdif,dif;
	
	maxdif = (a[0]-a[1]);

	for(i=1; i<n-1; i++){
		dif = (a[i]-a[i+1]);
		if(dif>maxdif){
			maxdif = dif;
		}
	}
	
	cout << "Listagem vetor: \n";
	escreverVecN(n, a);
	cout << "\tMaior diferença entre dois elementos consecutivos = " << maxdif;
	getchar();
	return 0;
}

int Vectores::mediaImpares(int n, int a[]){
	
	_tsetlocale(LC_ALL, _T("portuguese"));
	int i,ci=0,si=0;
	
	
	int * vec= new int[n];
	
	for(i=0; i<n; i++){
		if(a[i] % 2 == 1){
			ci++;
			si = si + a[i];
		}
	}
	
	cout << "Listagem vetor: \n";
	escreverVecN(n, a);
	cout << "\tMédia dos elementos ímpares = " << (si/ci);
	getchar();
	return 0;
	
}

int Vectores::multiplos3(int n, int a[]){
	
	_tsetlocale(LC_ALL, _T("portuguese"));
	int i,cm3=0;
	
	for(i=0; i<n; i++){
		if(a[i] % 3 == 0){
			cm3++;
		}
	}
	
	cout << "Listagem vetor: \n";
	escreverVecN(n, a);
	cout << "\tNúmero de elementos múltiplos de 3 = " << (cm3);
	getchar();
	return 0;
}

int Vectores::elementosComuns(){
	_tsetlocale(LC_ALL, _T("portuguese"));
	int i,j,k,n1,n2,encontrou=0;
	
	do{
		cout << ("Número de números inteiros de VEC1(N): ");
		cin >> (n1);
	}while (n1<=0);
	
	int * vec1= new int[n1];
	
	for(i=0; i<n1; i++){
		cout << "Elemento [" << i+1 << "] :";
		cin >> (vec1[i]);
	}
	
	do{
		cout << ("Número de números inteiros de VEC2(N): ");
		cin >> (n2);
	}while (n2<=0);
	
	int * vec2= new int[n2];
	
	for(i=0; i<n2; i++){
		cout << "Elemento [" << i+1 << "] :";
		cin >> (vec2[i]);
	}
	
	for(i=0; i<n1; i++){ //Vetor 1
		for(k=0; k<i; k++){ //Vetor 1 para trás
			if(vec1[i] == vec1[k]){
				encontrou=1;
				cout << (vec1[i]);
				k = i;
			}
		}
		if(encontrou == 0){
			for(j=0; j<n2; j++){
				if(vec1[i] == vec2[j]){
					cout << (vec1[i]);
					j = n2; // bloquear repetidos vec2
				}
			}
		}
	}
	
	cout << "\n";
	system("PAUSE");
	getchar();
	return 0;
}

int Vectores::vecOrdenado(int n, int a[]){
	
	_tsetlocale(LC_ALL, _T("portuguese"));
	int i,j,aux;
	
	int * vec_ordenado= new int[n];
	
	for(i=0; i<n; i++){
		vec_ordenado[i] = a[i];
	}
	
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(vec_ordenado[i] > vec_ordenado[j]){
				aux = vec_ordenado[i];
				vec_ordenado[i] = vec_ordenado[j];
				vec_ordenado[j] = aux;
			}
		}
	}
	
	for(i=0; i<n; i++){
		cout << (vec_ordenado[i]);
	}
	
	cout << "\n";
	system("PAUSE");
	getchar();
	return 0;
}

int Vectores::posicoesHomologas(){
	_tsetlocale(LC_ALL, _T("portuguese"));
	int i,j,n1,n2,ch=0;
	
	do{
		cout << ("Número de números inteiros de VEC1(N): ");
		cin >> (n1);
	}while (n1<=0);
	
	int * vec1= new int[n1];
	
	for(i=0; i<n1; i++){
		cout << "Elemento [" << i+1 << "] :";
		cin >> (vec1[i]);
	}
	
	do{
		cout << ("Número de números inteiros de VEC2(N): ");
		cin >> (n2);
	}while (n2<=0);
	
	int * vec2= new int[n2];
	
	for(i=0; i<n2; i++){
		cout << "Elemento [" << i+1 << "] :";
		cin >> (vec2[i]);
	}
	
	for(i=0; i<n1; i++){ //Vetor 1
		if(vec1[i] == vec2[i]){
			ch++;
		
		}
	}
	
	cout << "\n";
	cout << "Número de posições homologas: " << ch << "\n";
	system("PAUSE");
	getchar();	
		
}
	


int Vectores::segundoMaiorValor(int n, int a[]){
		
	system("cls");

	int maior=a[0];
	
	for(int i=1;i<n;i++){
	if(a[i]>maior) {
	maior=a[i];
	}
	}
	int segundomaior;
	for(int i=0;i<n;i++){
	if(a[i]!=maior) {
	segundomaior=a[i];
	break;
	}
	}
	for(int i=0;i<n;i++){
	if(a[i]<maior && a[i]>segundomaior) {
	segundomaior=a[i];
	}
	}

	cout << "Listagem vetor: \n";
	escreverVecN(n, a);
	cout << "Segundo maior: " << segundomaior << "\n";
	system("PAUSE");
       
	return 0;
   
}
    	
