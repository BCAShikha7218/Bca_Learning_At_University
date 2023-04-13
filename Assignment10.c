//Write a C code to find the type of array
//If all elements in the array are odd it is known as "ODD ARRAY"
//if all elements in the array are even it is known as "EVEN ARRAY"
//if both even and odd available it is known as MIXED array


int findType(int n, int *) //complete this function
{
       int arr[n];
   int i;
   int odd = 0, even = 0;
   printf("enter the elements into an array:");
   for(i = 0; i < n; i++){
      scanf("%d",&arr[i]);
   }
   for(i = 0; i < n; i++){
      if(arr[i] % 2 == 1)
         odd++;
      if(arr[i] % 2 == 0)
         even++;
   }	 if(odd == n)
      printf("Odd Array");
   else if(even == n)
      printf("Even Array");
   else
      printf("Mixed Array");   
}
int main()
{
   int n;
   printf("enter no of elements:");
   scanf("%d",&n);
   findType(n);
  return 0;
}
