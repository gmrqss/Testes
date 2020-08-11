#include <stdio.h>

int main(int charc, char *charv[])
{
  printf("Content-type: text/html\n\n");
  printf("<html><head>\n");
  printf("<title>Ola, Mundo!</title>\n");
  printf("</head>");
  printf("<body><h1 align=center>Ola, Mundo!</h1>\n");
  printf("</body></html>");
  return 0;
}