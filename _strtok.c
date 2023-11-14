#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void _strtok(const char *str, char delimeter))
{
	int len = strlen(str);
	char word[len + 1];
	int i, j;
	int i = str;
	int j = delimeter;

	for (i = 0; i <= len; i++)
	{
		j = 0;
		if (str[i] == delimeter || str[i] == '\0')
		{
			word[j] = '\0';
		}

		if (j > 0)
		{
			printf("%s\n", word);
			j = 0;
		}
		else
		{
			word[j++] = str[i];
		}
	}
}
