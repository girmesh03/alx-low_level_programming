#include "main.h"
#include <stdlib.h>

int word_l(char *str);
int count_w(char *str);

/**
* strtow - splits a string into words
* @str: a string into words
* Return: array of strings(words)
*/

char **strtow(char *str)
{
int index_i = 0, index_j = 0, index_k = 0, index_h = 0, size = 0, len = 0;
char **words;

if (str == NULL || str[0] == '\0')
return (NULL);

size = count_w(str);

if (size == 0)
return (NULL);

words = malloc((size + 1) * sizeof(char *));

if (words == NULL)
return (NULL);

while (str[index_i] != '\0')
{
while (str[index_i] == ' ' && str[index_i] != '\0')
index_i++;

if (str[index_i] == '\0')
{
words[index_j] = NULL;
return (words);
}

words[index_j] = malloc(sizeof(char) * word_l(str + index_i) + 1);

if (words[index_j] == NULL)
{
for (index_k = index_j - 1; index_k >= 0; index_k--)
free(words[index_k]);

free(words);

return (NULL);
}

len = word_l(str + index_i);

for (index_h = 0; index_h < len && str[index_i] != '\0'; index_h++, index_i++)
words[index_j][index_h] = str[index_i];

words[index_j][index_h] = '\0';
index_j++;
}

words[index_j] = NULL;

return (words);
}


/**
 * word_l - returns the lenght of a word
 * @s: pointer to s
 * Return: 0 on success
 */

int word_l(char *s)
{
	int count = 0;

	while (*(s + count) != ' ' && *(s + count) != '\0')
		count++;

	return (count);
}


/**
 * count_w - counts words in string
 * @str: pointer to str
 * Return: number of words
 */

int count_w(char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}
