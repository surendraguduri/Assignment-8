#include <stdio.h>
#define MAX_LEN 1024

int main() {
  /*Read the file.*/

  char ch;
  int char_count = 0, word_count = 0, line_count = 0;
  int in_word = 0;
  //char file_name[MAX_LEN];
  FILE *fp;

  //printf("Enter a file name: ");
  //scanf("%s", file_name);

  fp = fopen("filecreationprogram.c", "r");

  if(fp == NULL) {
    printf("Could not open the file.\n");
    return 1;
  }

  while ((ch = fgetc(fp)) != EOF) {
    char_count++;

    if(ch == ' ' || ch == '\t' || ch == '\0' || ch == '\n') {
      if (in_word) {
        in_word = 0;
        word_count++;
      }

      if(ch = '\0' || ch == '\n') line_count++;

    } else {
      in_word = 1;
    }
  }

  printf("In the file :\n");
  printf("Number of characters: %d.\n", char_count);
  printf("Number of words: %d.\n", word_count);
  printf("Number of lines: %d.\n", line_count);

  return 0;
}
