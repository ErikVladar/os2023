#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(){
  if(argc!){
     fprintf(2, “no arg\n”);
     exit(-1);
  }
  sleep(atoi(argv[1]));
  exit(1);
}
