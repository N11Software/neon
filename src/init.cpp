#include <sys/stat.h>
#include <sys/types.h>
#include <iostream>
#include <string>

int main() 
{
	// Check if folder .neon exists
	// If not, create it
	if (mkdir(".neon", 0777) == -1)
		printf("Error initalizing repository\n");
	else {
		printf("Initialized repository\n");

		// Get user input for repository name and description
		printf("Enter repository name: ");
		char name[100];
		scanf("%s", name);
		// TODO : Currently the description does not print anything after one space.
		// If some one would like to figure out how to print the full input (with spaces)
		// then please do so. - 4tl
		printf("Enter repository description: ");
		std::string description[100];
		scanf("%s", description);

		// Create .neon/config.txt using name and description
		FILE *fp = fopen(".neon/config.txt", "w");
		fprintf(fp, "Repository Name: %s\nRepository Descripton: %s", name, description);
		fclose(fp);
	}

}
