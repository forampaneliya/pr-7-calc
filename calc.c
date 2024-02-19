#include<stdio.h>

calc()
{
	int choice,a,b;
	
	
	
	do
	{
	    printf("Enter your choice = ");
		scanf("%d",&choice);
		
		if(choice==0)
		{
			printf("Exit....");
			
		}
		
		if(choice<0 && choice>5)
		{
			printf("Enter proper choice!");
		}	
		
		if(choice>0 && choice<6)
		{
			printf("Enter value A =");
			scanf("%d",&a);
			printf("Enter value B =");
			scanf("%d",&b);
			
			switch(choice)
			{
				case 1 :
					     printf("Addition of %d + %d = %d\n",a,b,a+b);
					     break;
					     
				case 2 :
					     printf("Substraction of %d - %d = %d\n",a,b,a-b);
					     break;
					     
				case 3 :
					     printf("Multiplication of %d * %d = %d\n",a,b,a*b);
					     break;
						 
				case 4 :
					     printf("Devision of %d / %d = %d\n",a,b,a/b);
					     break;
						 
				case 5 :
					     printf("Moduls of %d %% %d = %d\n",a,b,a%b);
					     break;		 		 	     
			}
		}
	}while(choice>0);
	
}


main()
{
	printf("Press 1 for Addition\n");
	printf("Press 2 for Substraction\n");
	printf("Press 3 for Multiplication\n");
	printf("Press 4 for Devision\n");
	printf("Press 5 for Moduls\n");
	printf("Press 0 for Exit\n");
	
	calc();
}