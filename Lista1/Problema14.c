#include<stdio.h>
#include<stdlib.h>

void moverDisco(char dest,char aux,char fte,int N,int *cont);

int main(){
  char fuente = 'A', auxiliar='B', destino='C';
  int N=3,contador =0;

  moverDisco(destino,auxiliar,fuente,N,&contador);
  return 0;
}
void moverDisco(char dest,char aux, char fte,int N, int *cont){
    if(N==0)
      return;

      moverDisco(aux,dest,fte,N-1,cont);

      printf("%d. Mover Disco %d: de %c a %c\n",*cont,N,fte,dest );
      (*cont)++;
      moverDisco(dest,fte,aux,N-1,cont);
}