#include "shell.h"

/**
 * bfree - NULLizes the address and releases a pointer
 * @ptr: Address of the Free Pointer to
 *
 * Return: If released, 1; otherwise, 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
