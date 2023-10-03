#ifndef MAIN_H
#define MAIN_H

/* 
 * File: main.h
 * AuthorOliver
 * Description: Header file for your C program.
 */

/* Add your function prototypes and declarations here */
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */

