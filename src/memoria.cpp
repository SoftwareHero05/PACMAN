#include <iostream>
#include <TazoDorado.hpp>

int main(int argc, char const *argv[])
{
    // int entero = 0;
    // bool  booleano= true;
    // char letra = 'A';
    // float decimal = 0.5;
    // TazoDorado tazo1, tazo2;

    // std::cout<<"Tamaño Entero: "<<sizeof(entero)<<std::endl;
    // std::cout<<"Tamaño Booleano: "<<sizeof(booleano)<<std::endl;
    // std::cout<<"Tamaño Letra: "<<sizeof(letra)<<std::endl;
    // std::cout<<"Tamaño Decimal: "<<sizeof(decimal)<<std::endl;
    // std::cout<<"Tamaño TazoDorado: "<<sizeof(TazoDorado)<<std::endl;

    // std::cout<<"Direccion TazoDorado: "<<&tazo1<<std::endl;
    // std::cout<<"Direccion TazoDorado: "<<&tazo2<<std::endl;

    // TazoDorado tazos [20];
    //     for(int i = 0; i < 20; i++)
    //       {
    //       std::cout<<i+1<<": "<<"Direccion TazoDorado: "<<&tazos[i]<<std::endl;
    //       }

    //     void* direccion = malloc(1);
    
    //C
    TazoDorado* direccion;
    direccion = (TazoDorado *)malloc(sizeof(TazoDorado));
    direccion->Inicializar();
    std::cout<<"Valor en direccion:  "<< direccion->IsFloating()<<std::endl;

    //C++
    TazoDorado *direccion2;
    direccion2 = new TazoDorado();
     std::cout<<"Valor en direccion:  "<< direccion2->IsFloating()<<std::endl;

    return 0;
}
