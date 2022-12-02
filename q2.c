// Question2


#include <stdlib.h>
#include <stdio.h>

int main() {
  FILE *fp;
  FILE *fp1;
  int x;
  char ch;
  fp = fopen("file.txt", "r+");
  fp1 = fopen("file1.txt", "w");
  if(fp == NULL) {
    printf("File doesnot exist.\n");
  }
  do {
    ch = fgetc(fp);
    if(ch >= 48 && ch <= 57) {
      fputc(ch, fp1);
    }
  } while(ch != EOF);
  fclose(fp);
  fclose(fp1);
}
// code ends here



