int division(int a,int b, int *c){
	if(b==0){
		return 0
	}
	*c = a/b;
	return 1;
}
