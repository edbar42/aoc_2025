/* 
 * Solution to AoC 2025 Day 1
 * Problem can be found at:
 * https://adventofcode.com/2025/day/1
 * */

#include <stdio.h>

int main(void) {
  FILE* fp;
  int password = 0;
  int dial = 50; // The dial starts pointing at 50

  char rotate; // Which way to rotate
  int clicks;

  fp = fopen("day1.txt", "r");

  while (fscanf(fp, " %c%d", &rotate, &clicks) != EOF) { 
    // NOTE: white space before string pattern trims
    // the read string, otherwise it reads whitespace
    // and then produce the incorrect password
    if (rotate == 'L') {
       dial -= clicks;
    } else if (rotate == 'R') {
      dial += clicks;
    }
    
    if (dial%100 == 0) {
      password++;
    }
  }

  printf("Password: %d\n", password);

  fclose(fp);

  return 0;
}
