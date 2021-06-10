#include <stdio.h>
#include <iostream>

using namespace std;

static int a = 0; // a alocação static não pode ser alterada 

int incrementa(int teste)
{

    int b = teste;
    static int c = 0;

    printf("a:%d,b:%d,c:%d /n", a, b, c);

    a++;
    b++;
    c++;
};

int main(void)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        incrementa(i);
    }
    return (0);
}