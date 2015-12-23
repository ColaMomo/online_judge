#include <iostream>
#include <stdio.h>
using namespace std;

int a[1005][1005];

int main() {
  //freopen("data.in", "r", stdin);
  int m, n;
  int t;
  while(scanf("%d%d", &m, &n) != EOF) {
    scanf("%d", &t);
    for(int i = 0; i < m; i++) {
      for(int j = 0; j < n; j++) {
        scanf("%d", &a[i][j]);
      }
    }

    int i = 0, j = n-1;
    bool result = false;
    while(i < m && j >= 0) {
      int temp = a[i][j];
      if(temp == t) {
        result = true;
        break;
      } else if(temp < t) {
        i++;
      } else {
        j--;
      }
    }

    if(result) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }
  return 0;
}
