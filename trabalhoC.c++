// Atividade Pontuada Struct, Ponteiros, Alocação dinamica : Rodrigo dos santos silva

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Cliente{
  char codigo[40];
  char nome[30];
  char idade[50];
  char cpf[15];
  char rg[50];
  char sexo[2];
};

int main(){
  struct Cliente *cliente = (struct Cliente*) calloc (2, sizeof(struct Cliente));
  int count = -1;
  count++;
  
  int i = 0;
  while(count > -1){
    cout<<"Digite o codigo do cliente: "<<endl;
    cin>>cliente[i].codigo;
    cout<<"Digite o nome do cliente:"<<endl;
    cin>>cliente[i].nome;
    cout<<"Digite a idade cliente:"<<endl;
    cin>>cliente[i].idade;
    cout<<"Digite o cpf do cliente:"<<endl;
    cin>>cliente[i].cpf;
    cout<<"Digite o rg do cliente:"<<endl;
    cin>>cliente[i].rg;
    cout<<"Digite o sexo do cliente:"<<endl;
    cin>>cliente[i].sexo;
    cout<<"Digite 0 para continuar ou um numero menor que zero para encerrar!"<<endl;
    cin>>count;
    i++;
  }
  
  for (int j = 0; j < i; j++){
    cout<<" codigo: "<<cliente[j].codigo<<" nome: " <<cliente[j].nome<<" idade: " << cliente[j].idade<<" cpf: " << cliente[j].cpf<<"rg:" << cliente[j].rg<<"sexo:" << cliente[j].sexo<<endl;
  }

return 0;
}