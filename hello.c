main(){
	printf("Hello Alex World!\n");
	setuid(0);
	setgid(0);
	system("/bin/bash");
	printf(" I'm root, that is, Super User!!!\n"); 
}
