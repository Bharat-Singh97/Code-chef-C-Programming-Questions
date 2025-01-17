#include <stdio.h>

int main() {
	int numbers[6] = {10,20,30,40,50,60};
	printf("%d", sizeof(numbers)/sizeof(numbers[0]));

}

