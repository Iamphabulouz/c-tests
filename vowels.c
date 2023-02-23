#include <stdio.h>

int main(void)
{
  char ch = 'a';

  while(ch <= 'z'){
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      printf("awesome\n");
    } else {
      printf("%c\n", ch);

    }
    ch++;
  }

  return (0);

}
      
