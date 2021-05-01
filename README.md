```
!{#include <stdio.h>}!

external fun printf(text: String, x: int)

fun fib(x: int, y: int, n: int): int
  if(n > 0)
    var z = x + y
    return fib(y, z, n - 1)
  else
    return x

fun main()
  for(var i = 0; i < 12; i = i + 1)
    printf("%d\n", fib(0, 1, i))
```

becomes

```c
#include <stdio.h>

int fib(int x, int y, int n) {
  if(n > 0) {
    int z = x + y;
    return fib(y, z, n - 1);
  } else {
    return x;
  }
}

void main(void) {
  for(int i = 0; i < 12; i = i + 1) {
    printf("%d\n", fib(0, 1, i));
  }
}

```