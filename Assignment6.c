//Write a C code to find the number of distinct elements in a sorted array.

int main()
{
  #include<stdio.h>
void printDistinctElements(int *array, int size){
    int i, j;
    
    for(i = 0; i < size; i++) {       
        for(j = i+1; j < size; j++) {
            if(array[i] == array[j]){
               break;
            }
        }
        if(j == size)
           printf("%d ", array[i]);
    }
}
int main(){
    int array[10] = {4, 6, 5, 3, 4, 5, 2, 8, 7, 0}; 
    int i;
    printDistinctElements(array, 10);
    return 0;
}
