#include<stdio.h>
#include<stdlib.h>

void sort(int Tab[]) {
    
	int i , j , X; //D
	
	printf("Input : ");
	for (i=0;i<5;i++)  //Display the elements of table 
	{
        	printf("%d ",Tab[i]);
	}
	
	for (i=0;i<4;i++)    
	{
		for (j=0;j<5-i-1;j++)
		{
			if(Tab[j]>Tab[j+1])
			{
				X = Tab[j];
				Tab[j] = Tab[j+1];
				Tab[j+1] = X;
						
			}
    	}
	}
	
	printf("\nOutput (sorted) : ");  //Display the elements of table sort
	{
        	printf("%d ",Tab[i]);
	}

}

void main () {
	
	int Tab[5] = {5,2,7,-1,3};
	
	sort(Tab);
}
