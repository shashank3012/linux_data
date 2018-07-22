#include <stdio.h>

typedef struct {
	int a;
	double b;
} type_t;

__extension__ type_t typeLUT[] = {[0 ... 100] = {5, 2.5}};  // initilision of 100 array of structures is between 5 and 2.5.

int main() {
	return 0;
}
