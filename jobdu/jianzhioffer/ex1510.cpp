#include <stdio.h>
#include <iostream>
using namespace std;

#define maxn 10005

char buf[maxn];

int main() {
  while(fgets(buf, maxn, stdin)) {
    int count = 0;
    int totalCount = 0;
    for(int i =0; buf[i] != '\0'; i++) {
      if(buf[i] == ' ') {
        count++;
      }
      totalCount++;
    }
    totalCount++;
  
    for(int i = totalCount; i >= 0; i--) {
      if(buf[i] != ' ') {
        buf[i + count * 2] = buf[i];
      } else {
        buf[i + count * 2] = '0';
        buf[i + count * 2 - 1] = '2';
        buf[i + count * 2 - 2] = '%';
        count--;
      }
    }

    printf("%s", buf);
  }

  return 0;

}


