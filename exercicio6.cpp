#include <iostream>
#include <string>

using namespace std;

int main()
{
    float x;
    
    cout << "Digite o valor da mercadoria:";
    cin >> x;

    cout << "Valor a pagar: "+ to_string(x*1.25);
    
    return 0;
}
