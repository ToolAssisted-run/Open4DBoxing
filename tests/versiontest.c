#include <stdio.h>
#include <string.h>
#include "version.h"
int main(void) {
  const char *v = open4dboxing_version();
  printf("Open4DBoxing %s\n", v);
  return strlen(v) > 0 ? 0 : 1;
}
