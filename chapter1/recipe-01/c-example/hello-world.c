#include <stdio.h>
#include <stdlib.h>

char *say_hello() { return "Hello, CMake world!"; }

void main() {
  printf("%s\n", say_hello());
}
