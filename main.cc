#include <iostream>


float Calorias;
void ConsultarCalorias();
void QuemarCalorias();


struct Usuario {
    std::string nombre;
    int edad;
    float calorias;
};


int AgregarCalorias(float &calorias, float x); 



int main() {
    int totalCalorias=2000;

    
    std::cout << "Bienvenido estas son sus calorias: "<<std::endl;
    void ConsultarCalorias( float totalCalorias);

    int AgregarCalorias(float &calorias, float x);

    void QuemarCalorias(float &calorias, float x);

    return 0;
}

int AgregarCalorias(float &calorias, float x) {
    calorias += 200;
    return 0;
}

//paso por valor
void ConsultarCalorias(float Calorias){

    std::cout<<"Calorias Actuales"<<Calorias<<"\n";

}

//puntero
void QuemarCalorias( int *Calorias,int Cantidad){

    if (Cantidad<0)
    {
        std::cout<<"El total de calorias no debe de ser menor a 0"<<"\n";
    }
    
    if (*Calorias-Cantidad<0)
    {
         std::cout<<"El total de calorias no debe de ser menor a 0"<<"\n";
    }
    
    *Calorias -= Cantidad;
    std::cout<<"El total de Calorias es:"<<Calorias<<"\n";
}

