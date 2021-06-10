// Atividade Pontuada Struct, Ponteiros, Alocação dinamica : Rodrigo dos santos silva

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Cliente{
  char codigo[50];
  char nome[30];
  int idade;
  int cpf;
  int rg;
  char sexo[2];
  };

 struct Produto{
  char produtoDescricao[50];
  float produtoValor;
  int qtdCompra;
  float totalCompra;
};

int main(){
  struct Cliente *cliente = (struct Cliente*) calloc (2, sizeof(struct Cliente));
  struct Produto *produto = (struct Produto*) calloc (2, sizeof(struct Produto));
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
    cout<<"Digite o sexo F ou M do cliente:"<<endl;
    cin>>cliente[i].sexo;
    cout<<"Digite o nome do Produto:"<<endl;
    cin>>produto[i].produtoDescricao;
    cout<<"Digite o valor do Produto:"<<endl;
    cin>>produto[i].produtoValor;
    cout<<"Digite o quantidade  do Produto:"<<endl;
    cin>>produto[i].qtdCompra;
    
    produto[i].totalCompra = produto[i].produtoValor * produto[i].qtdCompra;
    cout<<"Digite 0 para continuar ou um numero menor que zero para encerrar!"<<endl;
    cin>>count;
    i++;
  }
  
  for (int j = 0; j < i; j++){
    cout<<" codigo: "<<cliente[j].codigo<<" nome: " <<cliente[j].nome<<" idade: " << cliente[j].idade<<" cpf: " << cliente[j].cpf<<"rg:" << cliente[j].rg<<"sexo:" << cliente[j].sexo<<endl;
    cout<< "produto: "<<produto[j].produtoDescricao<<"valor: "<<produto[j].produtoValor <<"qtd produto: "<<produto[j].qtdCompra <<"valor total: "<<produto[j].totalCompra<<endl;
  }
  free(cliente);
  free(produto);
return 0;
}