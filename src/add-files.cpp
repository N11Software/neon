//========= Copyright N11 Software, All rights reserved. ============//
//
// Purpose: Add files to a commit.
//
// Author: Ariston Lorenzo
//
//===================================================================//

#include <iostream>
#include <string>
#include "include/commit.h"
#include "include/file.h"

// add files to a commit using 'neon add' from user input
void add_files(commit *c, std::string *files) {
	std::string file_name;

	for (int i = 0; i < files->size(); i++) {
		file_name = files[i];
		c->files.push_back(file_name);
	}
}