#include <stdio.h>

void writeRightTower(int n, int max){
  printf("%i",n);
  if (n==max) {
    return;
  }else{
    writeRightTower(n+1,max);
    printf("%i", n);
  }
}

int main (){
  int i =0;
  int max = 10;
  for (i = 1; i < max; i++) {
    writeRightTower(1,i);
    printf("\n");
  }
  return;
}
