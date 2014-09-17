# include <stdio.h>
# include <stdlib.h>

int main (int argc, char * argv[]) {
  if (argc < 2) {
    printf("Missing args!");
    return -1;
  }
  int i = atoi(argv[1]);
  if (!i) {
    printf("Input nonzero value!");
    return -1;
  }
  if (i % 2) {
    printf("%d is odd!", i);
  } else {
    printf("%d is even!", i);
  }
  return 0;
}
