#include <sys/stat.h>
#include <sys/types.h>
#include <iostream>

int init_repository() 
{
	// Check if folder .neon exists
	// If not, create it
	if (mkdir(".neon", 0777) == -1)
		printf("Error initalizing repository\n");
	else
		printf("Initialized repository\n");
}
