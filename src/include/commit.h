//========= Copyright N11 Software, All rights reserved. ============//
//
// Purpose: Various structures to define commits.
//
// Author: Ariston Lorenzo
//
//===================================================================//

#ifndef COMMIT_H
#define COMMIT_H

#include <iostream>
#include <string>

#include "nlohmann/json.hpp"

/*
 * This is the main structure of this header file. This struct
 * defines the commit. These will eventually be printed out to
 * a JSON file or some other file format that I may have to
 * make ;-;.
 */
struct commit {
	std::string sha1;
	std::string parent_sha1;
	struct author {
		std::string name;
		std::string email;
	} author;
	std::string message;
	time_t date;
	std::string dir_name; // This is only used if the commit is not in root.
	std::string file_name;
};

/*
class commit_json {
	json commit;
	
	commit["id"] = std::cout << commit.sha1;
	commit["parent"] = std::cout << commit.parent_sha1;
	commit["author"] = {
		{"name", commit.author.name},
		{"email", commit.author.email}
	}
	commit["message"] = std::cout << commit.message;
	commit["timestamp"] = std::cout << commit.date;
	commit["dir_name"] = std::cout << commit.dir_name;
	commit["file_name"] = std::cout << commit.file_name;
}
*/

#endif