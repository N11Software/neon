//========= Copyright N11 Software, All rights reserved. ============//
//
// Purpose: Commit a file(s) to the repository.
//
// Author: Ariston Lorenzo
//
//===================================================================//

#include <iostream>
#include <string>
#include "include/commit.h"
#include "include/file.h"

#include "include/nlohmann/json.hpp"

struct commit_options {
	std::string message;
	size_t insertions;
	size_t deletions;
	size_t files_modified;
	size_t new_files;
};