int fib(int x, int y, int n) {
  if(n > 0) {
    return fib(x + y, y, n - 1);
  } else {
    return x + y;
  }
}

printf(fib(0, 1, 10));