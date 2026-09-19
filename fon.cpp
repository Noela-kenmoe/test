#include<iostream>
 int echange(int *a, int *b);

int main(){
   int nombre;
    bool test;
    int z=10;
    int y, c ,d;
    //appel des deux nombres
    std::cout<<"entrer les deux premiers nombres :";
    std::cin>> c >> d;
    std::cout<<"avant l'appel:"<< c << d;
    //appel de la fonction echange
    y =echange(&c,&d);
     std::cout<<"apres l'appel :"<< c << y ;
     std::cout<<"verification de l'appel";
     return 0;
     
}
int echange (int *a, int *b)
     { 
      
        int x;
        *a = x;
        *a = *b;
        *b = x;
        return 0;
     }