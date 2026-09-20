#include<iostream>
int main ( ){
    int nbr,i;
    std::cout<<"veillez entrer un nombre:\n";
    std::cin>> nbr;
    std::cout<<"LA TABLE DE MULTIPLICATION PAR "<<nbr<<"EST :\n";
    for ( i = 0; i <=10; i++)
    {
        /* code */
        std::cout<<nbr<<"*"<<i<<"="<<i*nbr<<"\n";
    }
    return 0;
}