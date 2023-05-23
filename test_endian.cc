#include <stdio.h>

int main() {
   unsigned int x = 0x12345678;
   char *c = (char*) &x;
   if (*c == 0x78) {
      printf("Little endian\n");
   } else {
      printf("Big endian\n");
   }
   return 0;
}