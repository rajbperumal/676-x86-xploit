#include <stdio.h>
#include <string.h>

int main(void)
{
  char text[128] = "University of Delaware, Newark, DE";

  printf("%s\n", text);

  // Find the length of the text
  int length = strlen(text);

  printf("Length of the text: %d\n", length);
  return 0;
}
