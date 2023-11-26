 #include "factor.h"
  2
  3 /**
  4  * main - main function
  5  *
  6  *
  7  * Return: void
  8  */
  9
 10 int main(int argc, char *argv[])
 11 {
 12         FILE *fptr;
 13         size_t count;
 14         ssize_t line;
 15         char *buffer = NULL;
 16
 17         if (argc != 2)
 18         {
 19                 fprintf(stderr, "Usage: factor <filename>\n");
 20                 exit(EXIT_FAILURE);
 21         }
 22         fptr = fopen(argv[1], "r");
 23         if (fptr == NULL)
 24         {
