/*
 * NEON - the worst version control system ever.
 *
 * Copyright (c) 2022, Ariston Lorenzo.
 */

#include <string>
#include "init.h"

const char *NEON_VERSION = "0.0.1";

const char neon_usage[] =
	"Usage: neon [--help] [--version] [command] [arguments]\n";

int main(int argc, const char **argv)
{
	if (argc < 3) 
	{
		printf("%s", neon_usage);
		return 1;
	}

	for (int i = 1; i < argc; ++i)
	{
		std::string arg = argv[i];
		if (arg == "--help" || arg == "-h") {
			printf("%s", neon_usage);
			return 1;
		}

		// TODO: make this actually work (still doesn't run)
		if (arg == "--version" || arg == "-v") {
			printf("neon version %s\n", NEON_VERSION);
			return 1;	
		}
	}

}
