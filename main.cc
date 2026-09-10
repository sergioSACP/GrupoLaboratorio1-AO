#include <iostream>

float Calorias;
void ConsultarCalorias();
void QuemarCalorias();

int main(){


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

