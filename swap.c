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
  int a[3][2]= {1,2,3,4,5,6};
  int* p=&a[0][0];

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
  printf("%d\n",a[2][0]);
//  an array is not a pointer, it has to be converted into a pointer
//  in order to be able to use it like that.
  printf("the address of a[0][0]=%p, value is %d\n", &a[0][0], *p);
  printf("the address of a[0][1]=%p, value is %d\n", &a[0][1], *(p+1));
  printf("the address of a[1][0]=%p, value is %d\n", &a[1][0], *(p+2));
  printf("the address of a[1][1]=%p, value is %d\n", &a[1][1], *(p+3));
  printf("the address of a[2][0]=%p, value is %d\n", &a[2][0], *(p+4));
  printf("the address of a[2][1]=%p, value is %d\n", &a[2][1], *(p+5));


  return 0;
  
} 

