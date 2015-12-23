#include <stdio.h>
using namespace std;
#define maxn 100005

int a[maxn];

int main() {
  int n;
  int count = 0;
  while(scanf("%d", &n) == 1) {
    if(n != -1) {
      a[count++] = n;
    } else {
      for(int i = count - 1; i >=0; i--) {
        printf("%d\n", a[i]);
      }
      count = 0;
    }
  }

  return 0;
}
