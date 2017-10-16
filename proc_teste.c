#include "types.h"
#include "stat.h"
#include "user.h"

#define OUTPUT_STREAM 1

int main(void) {
  int pid;
  pid = fork();
  if (pid) pid = fork();
  if (pid) pid = fork();
  if (pid) pid = fork();
  if (pid) pid = fork();
  if (pid) pid = fork();
  if (pid) pid = fork();
  if (pid) pid = fork();
  if (!pid) {
    int i = 0;
    while(i++ < 2123) {
      int j = 0;
      while(j++ < 1) {
        int b = getpid() * 5 / 6 + 10;
        b = b + b + getpid();
      }
    }
  } else if (pid > 0) {
    wait();
  } else {
    printf(OUTPUT_STREAM, "Erro\n");
  }
  exit();
}