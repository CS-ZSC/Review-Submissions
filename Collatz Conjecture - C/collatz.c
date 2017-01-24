#include < stdio.h >
#include < stdlib.h >

int main() {
  int n; //n:the number which the user want to log in //
  int m, r; //m:the number of turns ,r:for check //
  scanf("%d", & n);
  m = 0;
  while (n != 1) {
    r = n % 2;
    if (r == 0) {
      n = n / 2;
    } else if (r == 1) {
      n = (n / 3) + 1;
    }
    m++;
  }
  printf("%d", m);
}
