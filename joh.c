#include<stdio.h>
void main()
{
	int main_choice ,sub_choice;
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("choose one of the following\n1.arthematic\n2.relational\n3.bitwise\n");
	scanf("%d",main_choice);
	switch(main_choice)
	{
	    case 1:
			printf("choose one of the following arthematic operation\n1.+\n2.-\n3.*\n4./\n5.%\n");
		    scanf("%d",&sub_choice);
		    switch(sub_choice)
		    {
		    	case 1:
		    		printf("%d+%d=%d",a,b,a+b);
		    		break;
		    	case 2:
		    		printf("%d-%d=%d",a,b,a-b);
		    		break;
		    	case 3:
		    		printf("%d*%d=%d",a,b,a*b);
		    		break;
		        case 4:
		        	printf("%d/%d=%d",a,b,a/b);
		        	break;
		        case 5:
		        	printf("%d%%d=%d",a,b,a%b);
			}
		
	}
}
