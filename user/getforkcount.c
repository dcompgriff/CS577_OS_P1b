//Header defines the system call handles.
#include "types.h"
#include "user.h"

int main(void){
  //Get the fork count by making the getforkcount() system call.
  int forkCount = getforkcount();
  printf(1, "%d\n", forkCount);
  exit(0);
}





