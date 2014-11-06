#include "lib.h"

int *g_pointer = 0;

int* GetGlobalPtr()
{
	if (!g_pointer)
	{
		g_pointer = new int;
		*g_pointer = 10;
	}

	return g_pointer;
}