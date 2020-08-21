#include "header.h"

int main(void)
{
	char str1[20] = "aello";
	char str2[20] = "asdf";
	int dictionary = 0, length;

	dictionary = my_strcmp(str1, str2);
	printf("%d\n", dictionary);

	length = my_strlen(str1);
	printf("%d\n", length);


	printf("%s\n", str1);
	printf("%s\n", str2);

	my_strcpy(str2, str1);

	printf("%s\n", str1);
	printf("%s\n", str2);

	my_strcat(str2, str1);

	printf("%s\n", str2);

	return 0;
}