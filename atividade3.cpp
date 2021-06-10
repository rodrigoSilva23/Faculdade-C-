#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){
    int x =5;
    int *pt_y;
    pt_y =&x;
    cout<<"valor ponteiro = "<<*pt_y<<" endereço original ="<< &pt_y<<" endereço recebido da variavel x "<<pt_y<<endl;
}
