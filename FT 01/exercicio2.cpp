#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x,y,z;
    
    cout << "Digite o primeiro numero:";
    cin >> x;
    
    cout << "Digite o segundo numero:";
    cin >> y;
    
    cout << "Digite o terceiro numero:";
    cin >> z;
    
    cout << "Um grande teste pa " + to_string((x+y+z)/3);
    
    return 0;
}
