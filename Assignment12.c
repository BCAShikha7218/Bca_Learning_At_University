//Input marks of 10 students in an array and then find the student with maximum marks

int main()
{
       float mark[10] = {45.6, 78.4, 65.9, 58.3, 82.1, 44.5, 61.8, 53.6, 49.2, 37.7}; 
         int i; 
         float sum = 0, highest = 0; 
         
         for (i = 0; i < 10; i++) 
              { 
                 sum += mark[i]; 
                 if (mark[i] > highest) 
                         highest = mark[i]; 
              } 
       
         printf("The Highest Mark is %5.2f \n", highest); 
         getch(); 
  return 0;
}
