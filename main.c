// Luana Fialho Franco de Melo 14755061
// Pedro Gasparelo Leme 14602421
// William Noboru Yoshihara 14612461

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char quadrado[50];
    int a, b, c, r,i;
    int y;
    char m, jogada;
    r=0;

     for (i=0; i<=40; i++)
     {
         quadrado[i] = ' ' ; 
     }
     jogada=m;

    for( ; r == 0 ; ) {
            y=0;
            for( ; ; )
            {
            printf("Insira qual jogador jogara, X ou O\n");
        scanf(" %c",&m);
        if(m==jogada)
        {
            printf("Alterne entre os jogadores X e O\n");
            continue;
        }

        if(m=='X'||m=='O')
        {
            jogada=m;
            break;
        }
        else
        {
            printf("ERRO: Invalido, insira somente X ou O\n");

        }
            }
             for( ; ; )
             {
             printf(" de as coordenadas do lance %c\n", m);
             scanf("%d", &a);
             scanf("%d", &b);
             system("cls");


    c = (( 10*a ) + b);
     if(quadrado[c] == ' ' )
        {
           quadrado[c] = m;
        }
        else
        {
              printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", quadrado[11], quadrado[12], quadrado[13] );
    printf("------------------\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n",  quadrado[21], quadrado[22], quadrado[23] );
    printf("------------------\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n",  quadrado[31], quadrado[32], quadrado[33] );
                printf("ERRO: espaco matricial ja ocupado \n");
                continue;
             }

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", quadrado[11], quadrado[12], quadrado[13] );
    printf("------------------\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n",  quadrado[21], quadrado[22], quadrado[23] );
    printf("------------------\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n",  quadrado[31], quadrado[32], quadrado[33] );


      if (quadrado[11] == quadrado[12] && quadrado[12] == quadrado[13] && (quadrado[11]!=' '))
  {
    r = 1;
  }
     if ((quadrado[21] == quadrado[22]) && (quadrado[22] == quadrado[23]) && (quadrado[21]!=' '))
     {
     r = 1;
     }
    if ((quadrado[31] == quadrado[32]) && (quadrado[32] == quadrado[33]) && (quadrado[31]!=' '))
    {
          r = 1;
    }
    if ((quadrado[11] == quadrado[22]) && (quadrado[22] == quadrado[33]) && (quadrado[11]!=' '))
  {
        r = 1;
  }
    if ((quadrado[13] == quadrado[22]) && (quadrado[22] == quadrado[31]) && (quadrado[13]!=' '))
{
      r = 1;
}
    if ((quadrado[11] == quadrado[21]) && (quadrado[21] == quadrado[31]) && (quadrado[11]!=' '))
 {
       r = 1;
 }

    if ((quadrado[12] == quadrado[22]) && (quadrado[22] == quadrado[32]) && (quadrado[12]!=' '))
  {
        r = 1;
  }
    if ((quadrado[13] == quadrado[23]) && (quadrado[23] == quadrado[33]) && (quadrado[13]!=' '))
  {
        r = 1;
  }
   for(i=1; i<=40; i++)
   {
       if(quadrado[i]!= ' ')
       {
           y++;
       }
       if( y == 9)
       {
           r=2;

       }
   }
       if( (a>=1)&&(a<=3)&& (b>=1)&&(b<=3))
             {
                break;
             }
             else {
                    printf("erro: coordenadas nao existem forneca outra\n");
                continue;
              }

             }
    }

    if( r==1 )
    {
        printf(" %c ganhou\n", m);
    }

        if( r == 2)
        {
            printf("Deu velha!! \n");
        }



    return 0;
}
