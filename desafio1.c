#include <stdio.h>
#include <string.h>

int main()
{
    char senha[10];
    int acertou = 0;
    
    printf("\n Entre com a senha : \n");
    gets(senha);

    if(strcmp(senha, "lasalle"))
    {
        printf ("\n Ops! Senha incorreta! \n");
    }
    else
    {
        printf ("\n Legal! Senha correta! \n");
        acertou = 1;
    }

    if(acertou)
    {
       /* da todos os acessos ao usuario*/
        printf ("\n Privilegios de root permitido!! \n");
    }

    
    return 0;
}