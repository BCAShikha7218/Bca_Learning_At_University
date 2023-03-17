//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

int main()
{
  //add your code here
  #include<stdio.h>
 
int main()
{
 int Size, i, a[10];
 int Positive_Count = 0, Negative_Count = 0;
 
 printf("\n Please Enter the Size of an Array :  ");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i < Size; i ++)
 {
   if(a[i] >= 0)
   {
 	Positive_Count++;
   }
   else
   {
 	Negative_Count++;
   }
 }
  
 printf("\n Total Number of Positive Numbers in this Array = %d ", Positive_Count);
 printf("\n Total Number of Negative Numbers in this Array = %d ", Negative_Count);
 return 0;
}

