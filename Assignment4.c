//Write a C code to find the maximum element in each row of the 3 X 3 matrix

int main()
{
  #include <stdio.h>
#include <stdlib.h> 
 
int main()
{
    int n,i, j,**a ,max;
    printf("\nEnter the N value for square matrix :");
    scanf("%d",&n); 
     
    a= (int **)calloc(n,sizeof(int*));
    for (i=0; i<n; i++) 
         a[i] =(int *)calloc(n,sizeof(int*));
    printf("\nEnter the elements in %dX%d matrix :",n,n);
    for (i = 0; i<n;i++)
    {
    	for(j=0;j<n; j++)
        {
		 scanf("%d",&a[i][j]);
	    }	
	} 
    printf("\ngiven  matrix :\n");
 
    for (i = 0; i < n;i++)
	{
        for (j = 0; j < n; j++)
        {
          printf("%d\t", a[i][j]);	
		}    
        printf("\n");
    }
    for (i=0;i<n;i++)
    {
    	max=a[i][0];
    	for(j=1;j<n;j++)
    	{
    		if(a[i][j]>max)
    		{
    		 max=a[i][j];
		    }
        }
        printf("max in row %d  is %d\n",i+1,max);
	} 
    return 0;
}
