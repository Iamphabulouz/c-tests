#include <stdio.h>

/**
 * written by cynthia
 *
 * this program prints the alphabets a-z
 *
 **/

int main(void)
{
  char letter = 'a';

  while (letter <= 'z') {
    printf("%c\n", letter);
    letter ++;
  }

    return (0);
} 
