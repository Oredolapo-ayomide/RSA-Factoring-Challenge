 #include "factor.h"
  2
  3 /**
  4  * main - main function
  5  *
  6  * Author: Thaoban Abdrasheed
  7  * Return: void
  8  */
  9 int main(int argc, char *argv[])
 10 {
 11         FILE *fptr;
 12         size_t count;
 13         ssize_t line;
 14         char *buffer = NULL;
 15
 16
 17         if (argc != 2)
 18         {
 19                 fprintf(stderr, "Usage: factor <filename>\n");
 20                 exit(EXIT_FAILURE);
 21         }
 22         fptr = fopen(argv[1], "r");
 23         if (fptr == NULL)
 24         {
 25                 fprintf(stderr, "Error: can't open file %s\n", argv[1]);
 26                 exit(EXIT_FAILURE);
 27         }
 28         while((line = getline(&buffer, &count, fptr)) != -1)
 29         {
 30                 factorize(buffer);
 31         }
 32 return (0);
 33 }
