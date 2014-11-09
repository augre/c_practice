#include <stdio.h>

void Swap(int* a, int* b) {
  int temp;
  temp= *a;
  *a=*b;
  *b=temp;
}

void Swapc(char* a, char* b){
  char temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

int g(int a[][2]){
  a[2][0]=5;
  printf("%d\n",a[2][0]);
  return 0;
}

int main(){
  int x=1;
  int y=2;
  char szoveg[10]="szoveg\n";
  int a[3][2];

  printf("x is %d, y is %d\n", x, y);
  Swap(&x,&y);
  printf("x is %d, y is %d\n", x, y);
  /*swap with arrays*/
  int scores[10];
  scores[0]=1;
  scores[9]=2;
  printf("scores[0] is %d, scores[9] is %d\n", scores[0], scores[9]);
  Swap(&(scores[0]), &(scores[9]));
  printf("scores[0] is %d, scores[9] is %d\n", scores[0], scores[9]);
  /*other way to pass array pointers*/
  Swap(scores, scores+9);
  printf("scores[0] is %d, scores[9] is %d\n", scores[0], scores[9]);

  printf(szoveg);
  Swapc(szoveg, szoveg+1);
  printf(szoveg);

  /*this is passing by reference too, because the effect 
  of the funtion exists in the caller after the function exited*/
  g(a);
  /*this one works*/
  printf("%d\n",a[2][0]);
  /*these ones don't*/
  printf("%d\n",a[4]);
  printf("%d\n",a[2]+0);
  printf("%d\n", *(a+2));
  
  


  return 0;
  
} 

