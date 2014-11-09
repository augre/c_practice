#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//generic swap, with generic pointers

int swap2(void *x, void *y, int size){
	void *tmp;
	if((tmp=malloc(size))==NULL)
		return -1;
	memcpy(tmp, x ,size); memcpy(x,y,size); memcpy(y,tmp,size);
	free(tmp);
	return 0;
}

int main(){
	int a=2, b=6;
	
	swap2(&a, &b, sizeof(int));
	printf("a=%d b=%d\n", a, b);
	
	
}