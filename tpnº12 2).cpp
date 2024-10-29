#include<iostream>
using namespace std;

class Vector 
{
private:
	
    int datos[5];

public:
    
    Vector()
	 {
        for(int i = 0; i < 5; i++) 
		{
            cout<<"Ingrese el valor para la posición "<<i + 1<<":";
            cin>>datos[i];
        }
    }

    
    void imprimir() 
	{
        for(int i = 0; i < 5; i++) 
		{
            cout<<datos[i]<< " ";
        }
        cout<<endl;
    }

    
    void imprimir(int hasta) 
	{
        for(int i = 0; i <= hasta && i < 5; i++) 
		{
            cout<<datos[i]<< " ";
        }
        cout<<endl;
    }

    
    void imprimir(int desde, int hasta) 
	{
        for(int i = desde; i <= hasta && i < 5; i++) 
		{
            cout<<datos[i]<< " ";
        }
        cout<<endl;
    }
};

int main()
 {
    Vector vec;
    cout<<"Impresión de todo el vector:"<<endl;
    vec.imprimir();
    cout<<"Impresión hasta la posición 3:"<<endl;
    vec.imprimir(3);
    cout<<"Impresión del rango de posiciones 1 a 3:"<<endl;
    vec.imprimir(1, 3);
    return 0;
}