#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars with a specific char
 * @size: size of array
 * @c: character initialized
 *
 * Return: character
 */
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL){
return (NULL);}
for (i = 0; i < size; i++){
str[i] = c;}
return (str);
}
