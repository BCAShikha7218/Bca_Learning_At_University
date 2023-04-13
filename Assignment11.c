//Convert an decimal to its binary equivalent using a bitwise operator

int main()
{
  int N = 7;
    int  c, result;

  for (c = 3; c >= 0; c--)
  {
    result = N >> c;

    if (result & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");
  return 0;
}
