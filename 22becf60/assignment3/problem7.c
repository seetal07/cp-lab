//to evaluate the expression x=(a-b)/(c-d) and give error message when c==d


  #include<stdio.h>

  int main()
{
	int a,b,c,d,x;
	printf("enter the numbers respectively:");
	scanf("%d %d %d %d ", &a,&b,&c,&d);

	if(c!=0){
		printf("the value of x is: %d", x=(a-b)/(c-d));
	}
	else{
		printf("error c cannot be equal to d");
	}

	return 0;
}


