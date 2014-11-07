#include <stdio.h>

void Swap(int* a, int* b) {
  int temp;
  temp= *a;
  *a=*b;
  *b=temp;
}

int main(){
  int x=1;
  int y=2;
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
  return 0;
  
} 

