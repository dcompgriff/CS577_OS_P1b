#include "types.h"
#include "stat.h"
#include "user.h"

extern int main(int argc, char** argv);

void _start(int argc, char** argv)
{
  int exitStatus = main(argc, argv);
  exit(exitStatus);
}



