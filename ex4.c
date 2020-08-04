#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int i;
  int hc=0;
  int tc=0;
  char s[]="Heads";
  char t[]="Tails";
  int a;
  srand(time(NULL));
  printf("Tossing a coin...\n");
  for(i=0;i<3;i++){
     a = rand()%2 + 1;
     if(a==1){
      printf("Round %d: %s\n",i+1,s);
      hc++;
     }
      else if(a==2){
      printf("Round %d: %s\n",i+1,t);
      tc++;
      }
  }
     printf("Heads: %d, Tails: %d\n",hc,tc);
     if(hc>tc) printf("You won!");
     else printf("You Lost!");
  return 0;
}
