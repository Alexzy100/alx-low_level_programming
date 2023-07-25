int main(void) {
  int n;

  n = _atoi("98");
  printf("%d\n", n); // 98

  n = _atoi("-402");
  printf("%d\n", n); // -402

  n = _atoi("          ------++++++-----+++++--98");
  printf("%d\n", n); // -98

  n = _atoi("214748364");
  printf("%d\n", n); // 214748364

  n = _atoi("0");
  printf("%d\n", n); // 0

  n = _atoi("Suite 402");
  printf("%d\n", n); // 402

  n = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
  printf("%d\n", n); // -98

  n = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
  printf("%d\n", n); // 402

  return 0;
}
