//Jason Kim & Richard Wong
//System Level Programming - Pd.5
//Work#05
//10-1-18

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char *s) {
  int counter = 0;
  while (s[counter]) {
    counter++;
  }
  return counter;
}

char * copy(char *dest, char *source) {
  int i = 0;
  while(*(source+i)) {
    *(dest+i) = *(source+i);
    i++;
  }
  return dest;
}

char * catn(char *dest, char *source, int n) {
  int i = length(dest);
}

int main() {
  char s1[64] = "anything";
  char s2[64] = "something";

  printf("Length of \"anything\":\n");
  printf("Ours: %d\n", length(s1));
  printf("Standard: %d\n", strlen(s1));

  printf("Copy s2 into s1:\n");
  printf("Ours: %s\n", copy(s1,s2));
  strcpy(s1, "anything");
  printf("Standard: %s\n", strcpy(s1,s2));

}
