#include <stdio.h>

int main(){
  int flag = 0;
  char buf[8];

  scanf("%s", buf);

  if (flag != 0){
    printf("Hacked!\n");
  } else {
    printf("Failed!\n");
  }
}
