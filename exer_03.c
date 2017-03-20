#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fp;
  char *line = NULL;
  size_t len =0;
  ssize_t read;

  fp = fopen("in_2.txt", "r");
  if (fp == NULL)
    exit(EXIT_FAILURE);
  /* code: http://stackoverflow.com/questions/3501338/c-read-file-line-by-line */
  while ((read = getline(&line, &len, fp)) != -1) {

    printf("%zu\n",read);
    printf("%s\n",line );
  }

  fclose(fp);
}
