#include <stdio.h>
#include <unistd.h>
int main(void)
{
	printf("Hello World\n");
	write(1, "Hello World\n", sizeof("Hello World\n") - 1);
	return 0;
}
