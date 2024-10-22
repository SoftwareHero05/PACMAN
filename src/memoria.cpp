#include <iostream>

int main(int argc, char const *argv[])
{
    int entero = 0;
    bool  booleano= true;
    char letra = 'A';
    float decimal = 0.5;

    std::cout<<"Tamaño Entero: "<<sizeof(entero)<<std::endl;
    std::cout<<"Tamaño Booleano: "<<sizeof(booleano)<<std::endl;
    std::cout<<"Tamaño Letra: "<<sizeof(letra)<<std::endl;
    std::cout<<"Tamaño Decimal: "<<sizeof(decimal)<<std::endl;

    
    return 0;
}
