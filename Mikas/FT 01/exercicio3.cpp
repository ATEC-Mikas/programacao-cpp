#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x,y;
    
    cout << "Digite o primeiro numero:";
    cin >> x;
    
    cout << "Digite o segundo numero:";
    cin >> y;
    
    
    cout << "Um grande teste pa " + to_string(x/y);
    
    return 0;
}
