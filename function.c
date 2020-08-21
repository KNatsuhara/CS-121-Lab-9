#include "header.h"

void reverse_string(char str[])
{
	int i = 0, j = 0;
	char temp = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < ((i+1) / 2); j++)
	{
		temp = str[j];
		str[j] = str[i - j];
		str[i - j] = temp;
	}
}

char* my_strcpy(char* destination, const char* source)
{
	while (*source != '\0')
	{
		*destination = *source;
		source++;
		destination++;
	}
	*destination = '\0';
	return destination;
}

char* my_strcat(char* destination, const char* source)
{
	while (*destination != '\0')
	{
		destination++;
	}

	while (*source != '\0')
	{
		*destination = *source;
		destination++;
		source++;
	}
	*destination = '\0';
	return destination;
}

int my_strcmp(const char* s1, const char* s2)
{
	int t = 1;
	for (int i = 0; i < 5; i++)
	{
		if (*s1 == *s2)
		{
			t = 0;
			s1++;
			s2++;
		}
		if (*s1 < *s2)
		{
			t = -1;
			s1++;
			s2++;
		}
	}
	
	return t;
}

 int my_strlen(const char* s)
{
	int c = 0;
	while (*s != 0)
	{
		s++;
		c++;
	}
	return c;
}