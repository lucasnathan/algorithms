#include <stdio.h>

void writeMiddleTower(int n, int max){
  printf("%d", n);
  if (n==max) {
    return;
  }else{
    writeMiddleTower(n+1,max);
    printf("%d", n);
  }
}

void writeLeftTower(int n,int max) {
  if (n==max) {
    return;
  }else{
    writeLeftTower(n+1,max);
    printf(" ");
  }
}

int main() {

  int max = 10;
  for (int j = 1; j < max; j++) {
    writeLeftTower(j,max-1);
    writeMiddleTower(1,j);
    printf("\n");
  }
  return 0;
}
