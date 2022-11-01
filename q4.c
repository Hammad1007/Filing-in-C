// Question
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

int len(char arr[1000]) {
  int len;
  while(arr[i] != '\0') {
    len++;
  }
  return len;
}

void reverse(char arr[1000], int start, int end) {
  start = 0; end = len(arr) - 1;
  char c;
  char temp;
  do {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  } while(arr[start] != " ");
}
  
// Main Driver
int main() {
  FILE *fp;
  FILE *fp1;
  char ch;
  char buff[1000];
  fp = fopen("file.txt", "r");
  fp1 = fopen("file3.txt", "w");
  if(fp == NULL) {
    printf("File doesnot exist.\n");
  }
  fgets(buff, 1000, (FILE*)fp);
  printf("%s", buff);
  size = len(buff);
  int i;
  for(i = 0; i < size; i++) {
    while(buff[i] != " ") {
      if(buff[i] == 65 || buff[i] == 69 || buff[i] == 73 || buff[i] == 79 || buff[i] == 85 || buff[i] == 97 || buff[i] == 101 || buff[i] == 117 || buff{i] == 105 || buff[i] == 111) {
        
      }
  fclose(fp);
  fclose(fp1);
}
