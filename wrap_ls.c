#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main (int argc, char const *argv[]){
	close(1);

	printf("Hello 1\n");
	int fd = open("out.txt", O_CREAT|O_WRONLY|O_TRUNC, 0666);
	printf("fd = %d\n", fd);

	/*

	char *argv2[3];
	argv2[0] = "ls";
	argv2[1] = "-la";
	argv2[2] = NULL;

	execvp(argv2[0], argv2);

	printf("Hello 2\n");
	*/
}
