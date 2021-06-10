// Atividade Pontuada Struct, Ponteiros, Alocação dinamica : Rodrigo dos santos silva

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Aluno
{

  char nome[30];
  float nota1;
  float nota2;
  float media;
};

int main()
{
  struct Aluno *aluno = (struct Aluno *)calloc(2, sizeof(struct Aluno));
  int count = -1;
  count++;

  int i = 0;
  while (count > -1)
  {
    cout << "Digite o nome do aluno: " << endl;
    cin >> aluno[i].nome;
    cout << "Digite a nota 1 :" << endl;
    cin >> aluno[i].nota1;
    cout << "Digite a nota 2" << endl;
    cin >> aluno[i].nota2;
    aluno[i].media = (aluno[i].nota1 + aluno[i].nota2) / 2;
    cout << "Digite 0 para continuar ou um numero menor que zero para encerrar!" << endl;
    cin >> count;
    i++;
  }

  for (int j = 0; j < i; j++)
  {
    cout << " nome: " << aluno[j].nome << " nota1: " << aluno[j].nota1 << " nota2: " << aluno[j].nota2 << "media:" << aluno[j].media << endl;
  }
  free(aluno);
  return 0;
}