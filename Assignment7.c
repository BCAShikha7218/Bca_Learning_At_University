//Write a code find the length of a string and its reverse equivalent without using readymade c functions

int main()
{
      char str[1000],rev[1000];
    int i,j,count=0;
  
    printf("Enter the String: ");
    scanf("%s", str);
  
    for (; str[count]!='\0'; ++count);
  
    printf("\nLength of Str is %d", count);
 	j=count-1;
 	for(i=0; i<count; i++)
 	{
 		rev[i]= str[j];
 		j--;
	 }
  	printf("\n The reverse of the string is: %s",rev);
  return 0;
}
