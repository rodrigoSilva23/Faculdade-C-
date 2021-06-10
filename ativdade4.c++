#include <iostream>
#include <stdlib.h>

using namespace std;

    struct cliente{
        string nome;
        int codigo;
        int idade;
        int cpf;
        int rg;
        char sexo [2];

    };
int main(){
    struct cliente *cliente = (struct cliente*) calloc(2, sizeof(struct cliente));
    int count = 0;
    int i= 0;
   
   count++;
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
    cout<<" codigo: "<<cliente[j].codigo<<" nome: " <<cliente[j].nome + " idade: " << cliente[j].idade <<" cpf: " << cliente[j].cpf <<"rg:" << cliente[j].rg <<"sexo:" << cliente[j].sexo <<endl;
  }


}