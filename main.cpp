#include <iostream>
#include "lib.h"
#include "dll.h"

int main()
{
	int *p_staticlib_ptr = GetGlobalPtr();
	std::cout << "exe linked lib global int pointer addr: " << p_staticlib_ptr << std::endl;

	int *p_dlllib_ptr = GetDllLinkedLibGlobalPtr();
	std::cout << "dll linked lib global int pointer addr: " << p_dlllib_ptr << std::endl;

	return 0;
}