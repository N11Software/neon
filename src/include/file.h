//========= Copyright N11 Software, All rights reserved. ============//
//
// Purpose: Various file structures for file handling.
//
// Author: Ariston Lorenzo
//
//===================================================================//

#ifndef FILE_H
#define FILE_H

#include <string>

#define HASH_SIZE 20

struct filespec {
	string fname;         // File name
	time_t last_modified; // Last modified time
	int size;             // File size
	char sha1[HASH_SIZE]; // SHA1 hash
	size_t length;	      // Length of the file
	string dir_name;      // Directory name (we won't use this in a case where it is unneccesary)
};

extern size_T file_length(FILE *file);

#endif