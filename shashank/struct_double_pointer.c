#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	int*i;
	char*c;
}type;


int main()
{
	type **allocation=NULL;

	allocation=(type**) malloc(sizeof(type*));
	*allocation=(type*)malloc(sizeof(type));

	
	allocation[0]->i=(int*)malloc(sizeof(int));
	allocation[0]->c=(char*)malloc(strlen("shashank")+1);

	*allocation[0]->i=10;
	strcpy(allocation[0]->c, "shashank");

	printf("data :%d\n",*allocation[0]->i);
	printf("name :%s\n", allocation[0]->c);

	free(allocation[0]->i);
	free(allocation[0]->c);
	free(allocation[0]);
	free(allocation);

return 0;

}

	


