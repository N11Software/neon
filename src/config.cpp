/*
 * NEON - the worse version control system ever
 *
 * Copyright (c) 2022, Ariston Lorenzo
 */

#include <string>
#include <filesystem>
#include <iostream>

// ==========================================================================
// Purpose: Saves and loads the neon configuration file (~/.neonrc)
// ==========================================================================

void setUser() 
{
	struct userData {
		std::string name;
		std::string email;
	};

	// Get user input to set userData
	userData user;
	std::cout << "Enter your name: ";
	std::cin >> user.name;
	std::cout << "Enter your email: ";
	std::cin >> user.email;

	// Write userData to .neonrc with fopen
	FILE *configFile;
	fprintf(configFile, "[user]\n");
	fprintf(configFile, "name = %s\n", user.name.c_str());
	fprintf(configFile, "email = %s\n", user.email.c_str());
}

int main( int argc, char *argv[] ) 
{
	// Syntax will be gitconfig syntax
	// https://git-scm.com/docs/git-config
	
	// Check if ~/.neonrc exists, if not, create it
	if ( std::filesystem::exists("~/.neonrc") )
	{
		// Open the file and parse it
		FILE *configFile;
		configFile = fopen("~/.neonrc", "r");
		return 1;
	}
	else
	{
		// Create ~/.neonrc
		FILE *configFile = fopen("~/.neonrc", "w");
		setUser();
		fclose(configFile);
	}
}
