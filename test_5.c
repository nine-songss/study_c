#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct space
{
	int bss, stack, heap, data, text, kernel;
};
int main()
{
	struct space s = { 1,2,3,4,5,6 };
	printf("%d,%d,%d,%d,%d,%d\n", s.bss, s.stack, s.heap, s.data, s.text, s.kernel);

	return 0;
}