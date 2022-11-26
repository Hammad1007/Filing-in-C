// Question1
#include <stdlib.h>
#include <stdio.h>

// Main Starts here
int main() {
  FILE *fp;  // file type pointer
  char ch;   // character to read
  fp = fopen("file.txt", "r");
  if(fp == NULL) {
    printf("File doesnot exist.\n");
  }
  do {
    ch = fgetc(fp);
    printf("%c", ch);
  } while(ch != EOF);  // reaches till the end of file is reached
  fclose(fp);
}




