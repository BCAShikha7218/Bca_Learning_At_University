//Convert an decimal to its binary equivalent using a bitwise operator

int main()
{
    int decimal_num, c, result;

  printf("Enter an integer in decimal number system\n");
  scanf("%d", &decimal_num);

  for (c = 3; c >= 0; c--)
  {
    result = decimal_num >> c;

    if (result & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");
  
  return 0;
}
