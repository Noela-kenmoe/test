#include<iostream>
 int echange(int *a, int *b);

int main(){
    bool test;
    int y, c ,d;
    //appel des deux nombres
    std::cout<<"entrer deux nombres :";
    std::cin>> c >> d;
    std::cout<<"avant l'appel:"<< c << d;
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