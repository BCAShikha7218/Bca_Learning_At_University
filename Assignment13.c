//Design a basic calculator in C. It must be a menu driven program
//Press 1 for addition
//Press 2 for substraction
//Press 3 for multiplication
//Press 4 for division

//after showing result the main menu should appear again.

int main()
{
   int num1,num2,ch;
  printf("Enter the first integer :");
  scanf("%d",&num1);
  
  printf("\nEnter the second integer :");
  scanf("%d",&num2);
  
    printf("\nSelect the Operation\n");
    printf("Type 1 for performing Addition\n");
    printf("Type 2 for performing Subtraction\n");
    printf("Type 3 for performing Multiplication\n");
    printf("Type 4 for performing Division\n");
    scanf("%d",&ch);
    
    switch(ch) {
      case 1:
        printf("\nThe Addition of  %d and %d is: %d\n",num1,num2,num1+num2);
        break;
        
      case 2:
        printf("The Substraction of %d  and %d is: %d\n",num1,num2,num1-num2);
        break;
        
      case 3:
        printf("The Multiplication of %d  and %d is: %d\n",num1,num2,num1*num2);
        break;  
      
      case 4:
        if(num2==0) {
          printf("Sorry, You can not divide a number by 0\n");
        } else {
          printf("The Division of %d  and %d is : %d\n",num1,num2,num1/num2);
        }  
        break;
        
      case 5: 
        break; 
        
      default:
        printf("Sorry, Invalid Choice");
        break; 
    }
  return 0;
}
