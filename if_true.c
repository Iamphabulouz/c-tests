#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(void)

{
  int a = 5;
  int b = 3;
  printf("%d", a > b);
  
  if ( TRUE ) {
    /* 5 > 3 */
    printf("that is weird\n");
  }
  else {
    printf("okay we good\n");
  }
}
    
