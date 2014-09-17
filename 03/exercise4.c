#include <stdio.h>

int main (int argc, char * argv) {
  for(int i = 99; i > 1; ) {
    printf("%d bottles of beer on the wall, %d bottles of beer.\n", i, i);
    printf("Take one down and pass it around, %d bottles of beer on the wall.\n", --i);
  }
  printf("1 bottle of beer on the wall, 1 bottle of beer.");
  printf("Take one down and pass it around, no more bottles of beer on the wall.");

  printf("No more bottles of beer on the wall, no more bottles of beer.");
  printf("Go to the store and buy some more, 99 bottles of beer on the wall.");
}
