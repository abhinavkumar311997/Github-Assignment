#include<stdio.h>
void microkernel_sendmsg(char *);

void main(){
  printf("Helloworld!\n");
  printf("This must be a monolithic design\n");
  microkernel_sendmsg("is more portable");
}
/*This is the last change done to complete
  the 30th step of the assignment*/
void microkernel_sendmsg(char *a){
  printf("microkernel: %s\n", a);
}
