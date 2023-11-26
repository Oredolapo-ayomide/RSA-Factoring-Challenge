 #include "factor.h"
  2
  3 /**
  4  * factorize - The function factorize a number
  5  * @buffer: pointer to the address of the number
  6  *
  7  * Author: Thaoban Abdrasheed
  8  * Return: int
  9  */
 10 int factorize(char *buffer)
 11 {
 12
 13         u_int32_t num;
 14         u_int32_t i;
 15
 16         num = atoi(buffer);
 17
 18
 19         for (i = 2; i < num; i++)
 20         {
 21                 if (num % i == 0)
 22                 {
 23                         printf("%d=%d*%d\n",num,num/i,i);
 24                         break;
 25                 }
 26         }
 27
 28 return (0);
 29 }
