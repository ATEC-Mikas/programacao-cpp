#include <iostream>
#include <tchar.h>
#include <string>

using namespace std;
//
//	
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//    int firstNumber, secondNumber, productOfTwoNumbers;
//    cout << "Primeiro n�mero: ";
//
//    cin >> firstNumber;
//    cout << "Segundo n�mero.: ";
//	cin >> secondNumber;
// 
//    productOfTwoNumbers = firstNumber * secondNumber;  
//
//    cout << "Produto = " << productOfTwoNumbers;    
//    
//    return 0;
//}
//
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//    int n, i;
//    float num[100], soma=0.0, media;
//
//    cout << "Insira o n�mero de dados (N): ";
//    cin >> n;
//
//    while (n > 100 || n <= 0)
//    {
//        cout << "Erro! N deve estar entre (1 e 100)." << endl;
//        cout << "Insira o n�mero de dados (N), novamente: ";
//        cin >> n;
//    }
//
//    for(i = 0; i < n; ++i)
//    {
//        cout << i + 1 << ". N�mero: ";
//        cin >> num[i];
//        soma += num[i];
//    }
//
//    media = soma / n;
//    cout << "Media = " << media;
//
//    return 0;
//}
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//    int firstNum, secondNum, div2Nums;
//    cout << "Primeiro n�mero: ";
//
//    cin >> firstNum;
//    cout << "Segundo n�mero.: ";
//	cin >> secondNum;
// 
//    div2Nums = firstNum / secondNum;  
//
//    cout << "Divis�o = " << div2Nums;    
//    
//    return 0;
//}
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//    int num;
//    
//	cout << "N�mero: ";
//    cin >> num;
//
//    cout << "Antecedente = " << num-1;
//    cout << "\n\tSucessor = " << num+1;  
//    
//    return 0;
//}
//
//int main() {
//	_tsetlocale(LC_ALL, _T("portuguese"));
//    int altura, base;
//    float area;
//    
//	cout << "Insira a altura(m):";
//    cin >> altura;
//    cout << "\n\tInsira a base(m):";
//	cin >>base;
//    
//	area = (0.5)*altura*base;
// 	
//	cout << "\n\t\t�rea do tri�ngulo : " << area;
// 
// 	return 0;
//}
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//    int num;
//    
//	cout << "Valor: ";
//    cin >> num;
//
//    cout << "Valor da mercadoria + 25% = " << num*1.25;  
//    
//    return 0;
//}
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	int num,d1,d2,d3;
//	
//	cout << "Digite um n�mero positivo com 3 digitos: ";
//	cin >> num;
//	
//	d1 = num / 100;
//	d2 = (num /10) % 10;
//	d3 = num % 10;
//	
//	cout << "\n\tPrimeiro digito: "  << d1 << "\n\t\tSegundo digito: " << d2  << "\n\t\t\tTerceiro digito: " << d3 ;
//}
//
//int main()
//{
//    _tsetlocale(LC_ALL, _T("portuguese"));
//	int num;
//
//    cout << "Insira um n�mero inteiro: ";
//    cin >> num;
//
//    if ( num % 2 == 0)
//        cout << num << " � par.";
//    else
//        cout << num << " � �mpar.";
//
//    return 0;
//}
//
//int main()
//{
//	float notaExEscrito, notaExOral;
//    cout << "Digite a nota do exame escrito: ";
//	cin >> notaExEscrito;
//	cout << ("\n\tDigite a nota do exame oral:");
//	cin >> notaExOral;
//	
//	if((notaExEscrito*0.7)+(notaExOral*0.3)>=10){
//		cout << ("\n\t\tAluno aprovado! \n\t\t\tNota exame oral: %.2f, \n\t\t\t\tNota exame escrito: %.2f\n", notaExOral, notaExEscrito);
//	}
//	else {
//		cout << "\n\t\tAluno reprovado! \n\t\t\tNota exame oral: " << notaExOral << "\n\t\t\t\tNota exame escrito: " << notaExEscrito;
//	}
//}
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	float nHorasExtra, nHorasTrabalhadas;
//   
//   	cout << "Digite o numero de horas trabalhadas:";
//	cin >> nHorasTrabalhadas;
//   
//    if (nHorasTrabalhadas <= 36){
//   		cout << "\tTem a receber: " << nHorasTrabalhadas*7.5;
//    }
//    else{
//    	nHorasExtra = nHorasTrabalhadas - 36;
//    	cout << "\tTem a receber: " << nHorasExtra*10 + 270;
//	}
//}
//
//int main(){
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int estadoCivil, idade;
//	do{
//		
//		cout << "Digite o n�mero correspondente ao seu estado civil(0 = solteiro, 1 = casado): ";
//		cin >> estadoCivil;
//		if(estadoCivil != 0 && estadoCivil != 1){
//			cout << ("O estado civil apenas pode ser 0 para solteiro e 1 para casado.\n");
//		}
//		
//	}while(estadoCivil != 0 && estadoCivil != 1);
//	
//	cout << "\nDigite a sua idade(anos):";
//	cin >> idade;
//	
//	switch(estadoCivil){
//		case 0:
//			if (idade < 25){
//				cout << "\nPertence ao Grupo 1.\n";
//			}
//			else{
//				cout << "\nPertence ao Grupo 2.\n";
//			}
//			break;
//		case 1:
//			if (idade < 34){
//				cout << "\nPertence ao Grupo 3.\n";
//			}
//			else{
//				cout << "\nPertence ao Grupo 4.\n";
//			}
//			break;
//		default:
//			cout << ("O estado civil apenas pode ser 0 para solteiro e 1 para casado.\n");
//	}
//}
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	int num1a7;
//	
//	cout << ("Introduza um n�mero entre 1 e 7: ");
//	cin >> (num1a7);
//	
//	switch(num1a7){
//		case 1:
//			cout << ("domingo.\n");
//			break;
//		case 2:
//			cout << ("segunda.\n");
//			break;
//		case 3:
//			cout << ("terca.\n");
//			break;
//		case 4:
//			cout << ("quarta.\n");
//			break;
//		case 5:
//			cout << ("quinta.\n");
//			break;
//		case 6:
//			cout << ("sexta.\n");
//			break;
//		case 7:
//			cout << ("sabado.\n");
//			break;
//		default:
//			cout << ("Nao inseriu um numero entre 1 e 7...");
//	}
//}
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	float saldoMedio;
//	
//	cout << ("Introduza o seu saldo m�dio(euros):");
//	cin >> (saldoMedio);
//	
//	if (saldoMedio >= 601){
//		cout << "Saldo M�dio: " << saldoMedio << "\n\tCr�dito: " << saldoMedio*0.4;
//	}
//	else{
//		if(saldoMedio >= 401){
//			cout << "Saldo M�dio: " << saldoMedio << "\n\tCr�dito: " << saldoMedio*0.3;
//		}
//		else{
//			if(saldoMedio >= 201){
//				cout << "Saldo M�dio: " << saldoMedio << "\n\tCr�dito: " << saldoMedio*0.2;
//			}
//			else{
//				cout << "\tNenhum cr�dito.\n";
//			}
//		}
//	}
//}
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//		float sal,aumento, nsal;
//	int cargo;
//	
//	cout << ("Introduza o sal�rio(euros):");
//	cin >> (sal);
//	cout << ("Introduza o n�mero correspondente ao cargo(101=Gerente; 102=Engenheiro; 103=Tecnico):");
//	cin >>(cargo);
//	
//	switch(cargo){
//		case 101:
//			aumento = 0.25;
//			break;
//		case 102:
//			aumento = 0.2;
//			break;
//		case 103:
//			aumento = 0.15;
//			break;
//		default:
//			aumento = 0.1;
//	}
//	
//	nsal = sal + sal * aumento;
//	
//	cout << "\nSal�rio antigo: " << sal << " euros" << "\nSal�rio novo: " << nsal  << " euros" << "\nDiferen�a: " << nsal-sal << " euros";
//	
//	
//}
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//    int n, i;
//    float num[100], soma=0.0, media;
//
//    cout << "Insira o n�mero de alunos (N): ";
//    cin >> n;
//
//    while (n > 100 || n <= 0)
//    {
//        cout << "Erro! N deve estar entre (1 e 100)." << endl;
//        cout << "Insira o n�mero de alunos (N), novamente: ";
//        cin >> n;
//    }
//
//    for(i = 0; i < n; ++i)
//    {
//      do{
//        cout << i + 1 << ". Nota: ";
//        cin >> num[i];
//		if(num[i]<0 || num[i]>20)
//			cout << "Erro! Nota deve estar entre (0 e 20)." << endl;	
//		}while(num[i]<0 || num[i]>20);
//      	
// 		soma += num[i];
//    }
//
//    media = soma / n;
//    cout << "M�dia = " << media;
//
//    return 0;
//}
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//    int n, i,c=0;
//    float num[100], soma=0.0, media;
//
//    cout << "Insira o n�mero de alunos (N): ";
//    cin >> n;
//
//    while (n > 100 || n <= 0)
//    {
//        cout << "Erro! N deve estar entre (1 e 100)." << endl;
//        cout << "Insira o n�mero de alunos (N), novamente: ";
//        cin >> n;
//    }
//
//    for(i = 0; i < n; ++i)
//    {
//      do{
//        cout << i + 1 << ". Nota: ";
//        cin >> num[i];
//		if(num[i]<0 || num[i]>20)
//			cout << "Erro! Nota deve estar entre (0 e 20)." << endl;	
//		}while(num[i]<0 || num[i]>20);
//      	if(num[i]<10)
// 		c++;
//    }
//
//    cout << "Total de negativas = " << c;
//
//    return 0;
//}
//
//
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int x,y,i;
//	
//	cout << ("Digite o valor de X: ");
//	cin >> (x);
//	do{
//		cout << ("Digite o valor de Y: ");
//		cin >> (y);
//		if(x>=y)
//		cout << ("Erro (x>=y): ");
//	}while (x>=y);
//	
//	for(i=x; i<y; i++){
//		if(i % 2 == 0){
//			cout << (i);
//		}
//	}
//}
// In�cio Exe s. Ler n�meros at� ser inserido o n�mero 0 e que permita calcular a soma e m�dia de todos os n�meros introduzidos.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	
//	int num,soma=0,contador=0;
//	
//	do{
//		cout << ("N�mero: ");
//		cin >> (num);
//	}while (num==0);
//	
//	while(num!=0){
//		soma+=num;
//		contador++;
//		cout << ("N�mero: ");
//		cin >> (num);
//	}
//	
//	cout << "Soma de todos os n�meros:" << soma <<" Media: " << soma/contador;
//	
//}
//In�cio Exe t. Determinar a percentagem dos N alunos de uma turma com idade superior a uma dada idade definida pelo utilizador.
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int idadeN,idadeSuperior,n,i,contador=0;
//	
//	do{
//		cout << ("N�mero de alunos: ");
//		cin >> (n);
//		cout << ("Qual a idade que quer definir como superior? ");
//		cin >> (idadeSuperior);
//	}while (n<=0);
//	
//	for(i=0; i<n; i++){
//		cout << ("Idade: ");
//		cin >> (idadeN);
//		if(idadeN > idadeSuperior){
//			contador++;
//		}
//	}
//	cout << "Percentagem de alunos com idade superior a " << idadeSuperior << "\n\t E igual a " << contador*100/n << " por cento";
//}
// In�cio Exe u. Ler uma sequ�ncia de n�meros inteiros at� que sejam introduzidos 5 n�meros �mpares e que mostre o
// maior n�mero par. Se n�o tiver sido introduzido nenhum n�mero par deve aparecer uma mensagem
// adequada.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int contador=0,n,max,num,flag=0;
//	
//	do{
//		cout << "N�mero [" << contador << "] :";
//		cin >> (num);
//		if(num % 2 != 0){
//			contador++;
//		}
//		else{
//			if(num > max || flag==0){
//			max=num;
//			flag=1;
//			}
//		}
//	}while(contador<5);
//	if(flag ==1){
//		cout << "Maior n�mero par: " << max;
//	}
//	else{
//		cout << ("N�o foi introduzido nenhum n�mero par, por essa razao n�o � possivel apresentar o maior numero par...");
//	}
//}
// In�cio Exe v. Ler uma sequ�ncia de pelo menos 5 n�meros inteiros e em que a soma dos seus elementos seja superior a 100.
//int main(){
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int soma=0,contador=0,num;
//	
//	do{
//		cout << "N�mero [" << contador << "] :";
//		cin >> (num);
//		soma+=num;
//		contador++;
//	}while(soma<=100 && contador<5);
//	
//}
// In�cio Exe w. Elabore um programa que l� um vector A de N inteiros e o escreva pala mesma ordem.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int i,n;
//	
//
//	do{
//		cout << ("N�mero de n�meros inteiros (N): ");
//		cin >> (n);
//	}while (n<=0);
//	
//	int * a= new int[n];
//	
//	for(i=0; i<n; i++){
//		cout << "Elemento [" << i+1 << "] :";
//		cin >> (a[i]);
//	}
//	
//	for(i=0; i<n; i++){
//		cout << (a[i]);
//	}
//	
//}
// In�cio Exe x. Elabore um programa que l� um vector A de N inteiros e o escreva pala ordem inversa.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int i,n;
//	
//	do{
//		cout << ("N�mero de n�meros inteiros (N): ");
//		cin >> (n);
//	}while (n<=0);
//	
//	int * a= new int[n];
//	
//	for(i=0; i<n; i++){
//		cout << "Elemento [" << i+1 << "] :";
//		cin >> (a[i]);
//	}
//	
//	for(i=n-1; i>-1; i--){
//		cout << (a[i]);
//	}
//
//}
// In�ncio Exe y. Dado um vector VEC com N elementos, determine o maior e o menor elemento e respetivas posi��es.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int posmax,max,min,posmin,i,n;
//	
//	do{
//		cout << ("N�mero de n�meros inteiros (N): ");
//		cin >> (n);
//	}while (n<=0);
//	
//	int * vec= new int[n];
//	
//	for(i=0; i<n; i++){
//		cout << "Elemento [" << i+1 << "] :";
//		cin >> (vec[i]);
//	}
//	
//	max = vec[0];
//	min = vec[0];
//	
//	for(i=1; i<n; i++){
//		if(vec[i] > max){
//			max = vec[i];
//			posmax = i;
//		}
//		else{
//			if(vec[i] < min){
//				min = vec[i];
//				posmin = i;
//			}
//		}
//	}
//	
//	cout << "Maior n�mero: " << max << " , posi��o: " << posmax+1 << "\n\t Menor n�mero: " << min << " , posi��o: " << posmin+1;
//	
//}
// In�cio Exe z. Pretende-se determinar de uma sequ�ncia de valores lidos, o n�mero de valores que s�o maiores que
// os seus dois vizinhos. Excluem-se as extremidades.
// Exemplo: {8,2,4,1,6,12,5,9} S�o dois.
//int main(){
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int i,n,cmv=0;
//	
//	do{
//		cout << ("Numero de numeros inteiros (N): ");
//		cin >> (n);
//	}while (n<=0);
//	
//	int * vec= new int[n];
//	
//	int * vmv= new int[n];
//	
//	for(i=0; i<n; i++){
//		cout << "Elemento [" << i+1 << "] :";
//		cin >> (vec[i]);
//	}
//	
//	for(i=1; i<n-1; i++){
//		if(vec[i-1] < vec[i] && vec[i+1] < vec[i]){
//			vmv[cmv] = vec[i];
//			cmv++;
//			i++;
//		}
//	}
//	
//	for(i=0; i<cmv; i++){
//		cout << (vmv[i]) << " ";
//	}
//	
//	cout << "\nNumero de valores que sao maiores que os seus vizinhos: " << cmv;
//	
//}
// In�cio Exe aa. Dado um vector de K elementos determine a maior diferen�a entre dois elementos consecutivos.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int i,k,maxdif,dif;
//	
//	do{
//		cout << ("N�mero de n�meros inteiros (K): ");
//		cin >> (k);
//	}while (k<=0);
//	
//	int * vec= new int[k];
//	
//	for(i=0; i<k; i++){
//		cout << "Elemento [" << i+1 << "] :";
//		cin >> (vec[i]);
//	}
//	
//	maxdif = abs(vec[0]-vec[1]);
//
//	for(i=1; i<k-1; i++){
//		dif = abs(vec[i]-vec[i+1]);
//		if(dif>maxdif){
//			maxdif = dif;
//		}
//	}
//	
//	cout << "Maior diferen�a entre dois elementos consecutivos = " << maxdif;
//}
// In�cio Exe bb. Elabore um programa que l� um vector de N elementos e calcule a m�dia dos elementos �mpares.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	int i,n,ci=0,si=0;
//	
//	do{
//		cout << ("N�mero de n�meros inteiros(N): ");
//		cin >> (n);
//	}while (n<=0);
//	
//	int * vec= new int[n];
//	
//	for(i=0; i<n; i++){
//		cout << "Elemento [" << i+1 << "] :";
//		cin >> (vec[i]);
//		if(vec[i] % 2 == 1){
//			ci++;
//			si = si + vec[i];
//		}
//	}
//	
//	cout << "M�dia dos elementos �mpares = " << (si/ci);
//}
// In�cio Exe cc. Dado um vector de N elementos indique quantos s�o m�ltiplos de 3.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int i,n,cm3=0;
//	
//	do{
//		cout << ("N�mero de n�meros inteiros(N): ");
//		cin >> (n);
//	}while (n<=0);
//	
//	int * vec= new int[n];
//	
//	for(i=0; i<n; i++){
//		cout << "Elemento [" << i+1 << "] :";
//		cin >> (vec[i]);
//		if(vec[i] % 3 == 0){
//			cm3++;
//		}
//	}
//	
//	cout << "N�mero de elementos que sao m�ltiplos de 3 = " << (cm3);
//	
//}
//	In�cio Exe dd. Dados dois vectores VEC1 e VEC2, escreva no ecr� os elementos comuns aos dois vectores.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	int i,j,k,n1,n2,encontrou=0;
//	
//	do{
//		cout << ("N�mero de n�meros inteiros de VEC1(N): ");
//		cin >> (n1);
//	}while (n1<=0);
//	
//	int * vec1= new int[n1];
//	
//	for(i=0; i<n1; i++){
//		cout << "Elemento [" << i+1 << "] :";
//		cin >> (vec1[i]);
//	}
//	
//	do{
//		cout << ("N�mero de n�meros inteiros de VEC2(N): ");
//		cin >> (n2);
//	}while (n2<=0);
//	
//	int * vec2= new int[n2];
//	
//	for(i=0; i<n2; i++){
//		cout << "Elemento [" << i+1 << "] :";
//		cin >> (vec2[i]);
//	}
//	
//	for(i=0; i<n1; i++){ //Vetor 1
//		for(k=0; k<i; k++){ //Vetor 1 para tr�s
//			if(vec1[i] == vec1[k]){
//				encontrou=1;
//				cout << (vec1[i]);
//				k = i;
//			}
//		}
//		if(encontrou == 0){
//			for(j=0; j<n2; j++){
//				if(vec1[i] == vec2[j]){
//					cout << (vec1[i]);
//					j = n2; // bloquear repetidos vec2
//				}
//			}
//		}
//	}
//}
// In�cio Exe ee. Elabore um programa que l� um vector VEC_ORIGINAL de N elementos e os reescreva num outro
// vector VEC_ORDENADO por ordem crescente.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	int i,j,n,aux;
//	
//	do{
//		cout << ("N�mero de elementos inteiros de VEC_ORIGINAL(N): ");
//		cin >> (n);
//	}while (n<=0);
//	
//	int * vec_original= new int[n];
//	int * vec_ordenado= new int[n];
//	
//	for(i=0; i<n; i++){
//		cout << "Elemento [" << i+1 << "] :";
//		cin >> (vec_original[i]);
//		vec_ordenado[i] = vec_original[i];
//	}
//	
//	for(i=0; i<n-1; i++){
//		for(j=i+1; j<n; j++){
//			if(vec_ordenado[i] > vec_ordenado[j]){
//				aux = vec_ordenado[i];
//				vec_ordenado[i] = vec_ordenado[j];
//				vec_ordenado[j] = aux;
//			}
//		}
//	}
//	
//	for(i=0; i<n; i++){
//		cout << (vec_ordenado[i]);
//	}
//	
//}
// In�cio Exe ff. Elabore um programa que dada uma matriz Q de L linhas e C colunas, preenchida com valores inteiros,
// indique se estamos na presen�a de uma matriz quadrada.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	int linhas,colunas;
//	
//	cout << ("N�mero de linhas da matriz Q: ");
//	cin >> (linhas);
//	
//	cout << ("N�mero de colunas da matriz Q: ");
//	cin >> (colunas);
//	
//	if(linhas == colunas){
//		cout << ("A matriz Q e quadrada.");
//	}
//	else{
//		cout << ("A matriz Q nao e quadrada.");
//	}
//}
// In�cio Exe gg. gg. Elabore um programa que l� duas matrizes, A e B, de LA e LB linhas e CA e CB colunas, respetivamente,
// cada uma preenchida com valores inteiros e insira o resultado da soma das matrizes A e B numa nova
// matriz C.
// (Somar todos os elementos correspondentes)
//int main()
//{
//	
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	int la,ca,lb,cb,i,j;
//	
//	cout << ("N�mero de linhas da matriz A: ");
//	cin >> (la);
//	cout << ("N�mero de colunas da matriz A: ");
//	cin >> (ca);
//	
//	cout << ("N�mero de linhas da matriz B: ");
//	cin >> (lb);
//	cout <<("N�mero de colunas da matriz B: ");
//	cin >> (cb);
//	
//	if(la==lb && ca==cb){
//		
//		int ** mat1 = new int * [la];
//		int ** mat2 = new int * [lb];
//		int ** mat3 = new int * [lb];
//		for(i=0; i<la; i++){
//			mat1[i] = new int [ca];
//			mat2[i] = new int [cb];
//			mat3[i] = new int [cb];
//			for(j=0; j<ca; j++){
//				cout << "Matriz 1: ";
//				cin >> (mat1[i][j]);
//				cout << "Matriz 2: ";
//				cin >> (mat2[i][j]);
//				mat3[i][j] = mat1[i][j] + mat2[i][j];
//			}
//		}
//		for(i=0; i<la; i++){
//			for(j=0; j<ca; j++){
//				cout << (mat3[i][j]) << " ";
//			}
//		}
//	}
//	else{
//		cout << ("Erro, s� � poss�vel somar matrizes com o mesmo n�mero de linhas e colunas.");
//	}
//
//}
//In�cio Exe hh. Elabore um programa que guarde numa estrutura de dados adequada os dados de N funcion�rios de
// uma empresa: n�mero de funcion�rio e sal�rio. Imprima o n�mero dos funcion�rios com sal�rio
// superior a 1000�.
//int main(){
//
//	_tsetlocale(LC_ALL, _T("portuguese"));
//
//	int n,i;
//
//	cout << ("Quantos funcion�rios(N)?");
//	cin >> (n);
//	if(n > 0){
//		float ** func = new float * [n];
//		for(i=0; i<n; i++){
//			func[i] = new float [2];
//			cout << "N�mero funcion�rio [" << i+1 << "] :";
//			cin >> (func[i][0]);
//			cout << "Sal�rio funcion�rio [" << i+1 << "] :";
//			cin >> (func[i][1]);
//			
//			
//		}
//		
//		for(i=0; i<n; i++){
//			if(func[i][1] > 1000){
//				cout << "N�mero funcion�rio com sal�rio maior que 1000� " << (func[i][0]) << " ";
//			}
//		}
//		
//	}
//	else{
//		cout << ("Erro, n<0");
//	}
//}
// In�cio Exe ii. Elabore um programa que guarde numa estrutura de dados adequada os dados de N alunos de uma
// turma: n�mero de aluno e idade. Imprima o n�mero dos alunos com idade compreendida entre 16 e
// 20.
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	int n,i;
//	
//	cout << ("Quantos alunos(N)? ");
//	cin >> (n);
//	if(n > 0){
//		int ** alu = new int * [n];
//		for(i=0; i<n; i++){
//			alu[i] = new int [2];
//			cout << "N�mero aluno [" << i+1 << "] :";
//			cin >> (alu[i][0]);
//			cout << "Idade aluno [" << i+1 << "] :";
//			cin >> (alu[i][1]);
//			
//			
//		}
//		
//		for(i=0; i<n; i++){
//			if(alu[i][1] > 16 && alu[i][1] < 20){
//				cout << "\nAluno n�mero: " << (alu[i][0]);
//			}
//		}
//		
//	}
//	else{
//		cout << ("Erro, n<0");
//	}
//
//}
// In�cio Exe jj. Elabore um programa que guarde numa estrutura de dados adequada os dados de N alunos de uma
// turma: n�mero de aluno e m�dia final. Imprima o n�mero do aluno com melhor m�dia e respetiva
// m�dia.
//int main(){
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	
//	
//	int n,i,maxmed=-1,nmaxmed;
//	
//	cout << ("Quantos alunos(N)?");
//	cin >> (n);
//	if(n > 0){
//		int ** alu = new int * [n];
//		for(i=0; i<n; i++){
//			alu[i] = new int [2];
//			cout << "N�mero aluno [" << i+1 << "] :";
//			cin >> (alu[i][0]);
//			cout << "M�dia aluno [" << i+1 << "] :";
//			cin >> (alu[i][1]);
//			if(alu[i][1] > maxmed){
//				maxmed = alu[i][1];
//			}
//		}
//		
//		for(i=0; i<n; i++){
//			if(alu[i][1] == maxmed){
//				cout << "N�mero aluno (com melhor m�dia): " <<  (alu[i][0]) << "\tM�dia: " << (maxmed);
//			}
//		}
//	}
//	else{
//		cout << ("Erro, n<0");
//	}	
//}
//In�cio Exe kk. Elabore um programa que l� uma matrizes MAT de L e C colunas, preenchida com valores inteiros e
// insira a diagonal da matriz num vector VEC .
//int main()
//{
//	int l,c,i;
//	
//	cout << ("Numero de linhas da matriz: ");
//	cin >> (l);
//	cout << ("Numero de colunas da matriz: ");
//	cin >> (c);
//	
//	if(l=c){
//		int mat[l][c], vec[l];
//		for(i=0; i<l; i++){
//			vec[i] = mat[i][i];
//			cout << (vec[i]);
//		}
//	}
//}
//In�cio Exe ll. Elabore um programa que l� uma matriz MAT de L e C colunas, preenchida com valores inteiros e
//// mostre o centro da matriz.
//int main()
//{
//	int l,c,i;
//	
//	cout << ("Numero de linhas da matriz: ");
//	cin >> (l);
//	cout << ("Numero de colunas da matriz: ");
//	cin >> (c);
//	
//	int mat[l][c];
//	
//	if(l % 2 == 0){ //Linha par
//		if(c % 2 == 0){ //Coluna par
//			cout << (mat[l/2-1][c/2-1], mat[c/2][c/2-1], mat[l/2-1][c/2], mat[l/2][c/2]);
//		}
//		else{ //Coluna impar
//			cout << (mat[l/2-1][c/2], mat [l/2][c/2]);
//		}
//	}
//	else{ //Linha impar
//		if(c % 2 == 0){ //Coluna par
//			cout << (mat[l/2][c/l-1], mat[l/2][c/l]);
//		}
//		else{ //Coluna impar
//			cout << (mat[l/2][c/2]);
//		}
//	}
//}
//
//
//1. Em linguagem C++, crie um programa com a classe Vectores com as seguintes fun��es:
////a. Ler um vector de N inteiros.
////b. Escrever um vector de N inteiros.
////c. Escrever um vector de N inteiros pala ordem inversa.
////d. Devolver a posi��o do maior elemento de um vector de N inteiros.
////e. Devolver a posi��o do menor elemento de um vector de N inteiros.
////f. Devolver quantos valores de um vector que s�o maiores que os seus dois vizinhos. Excluem-se as
////extremidades.
////Exemplo: {8,2,4,1,6,12,5,9} S�o dois.
////g. Dado um vector de K elementos determine a maior diferen�a entre dois elementos consecutivos.
////h. Calcular a m�dia dos elementos �mpares de um vector de N inteiros.
////i. Determinar a quantidade de m�ltiplos de 3 de um vector de N inteiros.
////j. Dados dois vectores VEC1 e VEC2, devolver um Vec3 com os elementos comuns aos dois vectores.
////k. Devolver um vector VEC por ordem crescente.
int lerN(){
	
	int n;
	
	do{
		cout << ("Qual o valor de N? ");
		cin >> (n);
	}while(n<=0);
	
	getchar();
	return n;
}


int * lerVecN(int n){
	
	int * a = new int[n];
	int i;
	
	for(i=0; i<n; i++){
		cout << "Elemento [" << i+1 << "] :";
		cin >> (a[i]);
	}
	
	getchar();
	return a;
	
}

int escreverVecN(int n, int a[]){
	
	int i;
	
	for(i=0; i<n; i++){
		cout << (a[i]) << "\n";
	}
	
	getchar();
	return 0;
	
}

int escreverInversamenteVecN(int n, int a[]){
	
	int i;
	
	for(i=n-1; i>-1; i--){
		cout << (a[i]) << "\n";
	}
	
	getchar();
	return 0;
	
}

int posMaior(int n, int a[]){
	
	int posMaior = 0, maior=a[0], i;
	
	for(i=0; i<n; i++){
		if(a[i] > maior){
			maior= a[n];
			posMaior = i;
		}
	}
	
	escreverVecN(n, a);
	cout << "Posi��o maior =" << (posMaior + 1) << "\n";
	
	system("PAUSE");
	getchar();
	return 0;
}

int posMenor(int n, int a[]){
	
	int posMenor = 0, menor=a[0], i;
	
	for(i=0; i<n; i++){
		if(a[i] < menor){
			menor = a[n];
			posMenor = i;
		}
	}
	
	
	escreverVecN(n, a);
	cout << "\nPosi��o menor ="<< (posMenor + 1) << "\n";
	
	system("PAUSE");
	getchar();
	return 0;
}

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
  	
	int n;
	int * a = new int[n];  
	  	
		char opc;
		    
		    do {
		        system("CLS");
		        printf("\n | MENU | Exe 1 - FT4 | MENU");
		        printf("\n1-Ler N");
		        printf("\n2-Ler o vetor");
		        printf("\n3-Escrever o vector lido");
		        printf("\n4-Escrever o vector lido inversamente ");
		        printf("\n5-Devolver a posi��o do maior elemento do vetor");
		        printf("\n6-Devolver a posi��o do menor elemento do vetor.");
				printf("\n0-Sair");
		        printf("\n\nEscolha a opcao:");
		        opc=getchar();
		        switch(opc)
		        {
		        case '1':{n=lerN();
					break;
					}
				case '2':{a=lerVecN(n);;
					break;
					}
		        case '3':{escreverVecN(n,a);
		                    break;
		                }
		        case '4':{escreverInversamenteVecN(n, a);
		                    break;
		                }
		        case '5':{posMaior(n, a);
		                  break;
		             }
		        case '6':{posMenor(n, a);
		                 break;
		          }
		        }     
		        }while(opc!='0');
	
	

	
	
	return 0;
	
}
