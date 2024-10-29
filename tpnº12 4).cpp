#include<iostream>
#include<string>
using namespace std;

class Socio 
{
private:
    
	string nombre;
    int antiguedad;

public:
    
    Socio() 
	{
        cout<<"Ingrese el nombre del socio: ";
        cin>>nombre;
        cout<<"Ingrese la antigüedad (en años): ";
        cin>>antiguedad;
    }

    
    int obtenerAntiguedad()
	 {
        return antiguedad;
    }

    string obtenerNombre() 
	{
        return nombre;
    }
};

class Club 
{
private:
    Socio socios[3];

public:
    
    void socioMayorAntiguedad() 
	{
        Socio mayor = socios[0];
        for(int i = 1; i < 3; i++)
		 {
            if(socios[i].obtenerAntiguedad() > mayor.obtenerAntiguedad()) 
			{
                mayor = socios[i];
            }
        }
        cout<<"El socio con mayor antigüedad es: "<<mayor.obtenerNombre()<<endl;
    }
};

int main() 
{
    Club club;
    club.socioMayorAntiguedad();
    return 0;
}