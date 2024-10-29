
#include<iostream>
using namespace std;

class Punto 
{
private:
    int x, y;

public:
    
    Punto() : x(0), y(0) {}

    
    Punto(int x, int y) : x(x), y(y) {}

   
    void imprimir() 
	{
        cout<<"Punto (" << x << ", " << y << ")"<<endl;
    }
};

int main() 
{
    Punto p1; 
    Punto p2(5, 10); 

    cout<<"Valores del primer punto:"<<endl;
    p1.imprimir();

    cout<<"Valores del segundo punto:"<<endl;
    p2.imprimir();

    return 0;
}