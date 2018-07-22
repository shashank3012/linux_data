#include<stdio.h>

#define  element_members(arr)  sizeof(arr)/sizeof(arr[0])

static int  (add)(int, int);
static int  (sub)(int,int);
static int  (mul)(int,int);
static int  (dev)(int,int);

//typedef int (*airthmatic)(int, int);

typedef struct
{
	char sign;
	int (*arithmatic)(int, int);
//	airthmatic calculation;
} calculator;

calculator calculatorlot[]=
{
	{'+', add},
	{'-', sub},
	{'*', mul},
	{'/', dev},
};

static int add(int a, int b)
{
	printf("add=%d\n",a+b);
	return 0;
}

static int sub(int a, int b)
{
	printf("sub=%d\n",a-b);
	return 0;
}

static int mul(int a, int b)
{
	printf("mul=%d\n",a*b);
	return 0;
}

static int dev(int a, int b)
{
	printf("dev=%d\n",a/b);
	return 0;
}



int main(int argc, char *argv[])
{
	int i=0;
	int a,b;
	printf("enter the two numbers\n");
	scanf("%d%d", &a, &b);

	for(i=0;i< element_members(calculatorlot); i++)
	{
		if(**(argv+1)==calculatorlot[i].sign)
		{
			calculatorlot[i].arithmatic(a,b);
		}
	}
	
return 0;
}































