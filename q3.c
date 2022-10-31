// Question 3
#include <stdlib.h>
#include <stdio.h>

int main() {
  FILE *fp;
  FILE *fp1;
  int x;
  char ch;
  fp = fopen("file.txt", "r");
  fp1 = fopen("file2.txt", "w");
  if(fp == NULL) {
    printf("File doesnot exist.\n");
  }
  
  do {
    ch = fgetc(fp);
    if(ch >= 33 && ch <= 64) {
      fputc(ch, fp1);
    }
  } while(ch != EOF);
  fclose(fp);
  fclose(fp1);
}
