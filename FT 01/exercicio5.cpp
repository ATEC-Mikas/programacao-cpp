#include <iostream>
#include <string>

using namespace std;

int main()
{
    float x,y;
    
    cout << "Digite a base:";
    cin >> x;
    
    cout << "Digite a altura:";
    cin >> y;
    
    cout << "Area do triangulo: "+ to_string((x*y)/2);
    
    return 0;
}
