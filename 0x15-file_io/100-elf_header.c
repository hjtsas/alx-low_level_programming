#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 1024

int main(int argc, char **argv)
{
	char command[MAX_COMMAND_LENGTH];
	char *filename = argv[1];

	snprintf(command, MAX_COMMAND_LENGTH, "readelf -h %s", filename);
	FILE *fp = popen(command, "r");

	if (fp == NULL)
	{
		fprintf(stderr, "Failed to execute command: %s\n", command);
		exit(98);
	}
	char line[1024];

	while (fgets(line, sizeof(line), fp))
	{
		if (strstr(line, "Magic"))
		{
			printf("%s", line);
		}
		else if (strstr(line, "Class"))
		{
			printf("%s", line);
		}
		else if (strstr(line, "Data"))
		{
			printf("%s", line);
		}
		else if (strstr(line, "Version"))
		{
			printf("%s", line);
		}
		else if (strstr(line, "OS/ABI"))
		{
			printf("%s", line);
		}
		else if (strstr(line, "ABI Version"))
		{
			printf("%s", line);
		}
		else if (strstr(line, "Type"))
		{
			printf("%s", line);
		}
		else if (strstr(line, "Entry point address"))
		{
			printf("%s", line);
		}
	}
	int status = pclose(fp);

	if (status != 0)
	{
		fprintf(stderr, "Command failed with status %d: %s\n", status, command);
		exit(98);
	}
	return 0;
}
