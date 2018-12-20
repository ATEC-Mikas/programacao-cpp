#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;
    
    cout << "Digite um numero:";
    cin >> x;
    
    cout << "Antecedente: " + to_string(x-1) + "\nSucessor:" + to_string(x+1);
    
    return 0;
}
