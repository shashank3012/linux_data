#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{

	int * i;
	char *c;
	double* d;
}type;


int main()
{
	type *allocation=NULL;
	
	allocation=(type*)malloc(sizeof(type));
	
	allocation->i=(int*)malloc(sizeof(int));

	*(allocation->i)=10;


	allocation->c=(char*)malloc(strlen("shashank")+1);
	strcpy(allocation->c, "shashank");
	
	allocation->d=(double*)malloc(sizeof(double));
	
	*(allocation->d)=12.8;

	printf("data=%d\n",*(allocation->i));
	printf("name=%s\n", allocation->c);
	printf("double=%lf\n", *(allocation->d));

	free(allocation->i);
	free(allocation->c);
	free(allocation->d);
	free(allocation);


return 0;

	
}
