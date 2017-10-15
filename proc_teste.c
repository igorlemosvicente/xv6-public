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
  if (!pid) { // If do filho
    int i = 0;
    // printf(OUTPUT_STREAM, "Filho: %d\n", getpid());

    while(i++ < 2123) {
      int j = 0;
      while(j++ < 1) {
        int b = getpid() * 5 / 6 + 10;
        b = b + b + getpid();
      }
    }
  } else if (pid > 0) {
    // printf(OUTPUT_STREAM, "Pai: %d\n", getpid());
    // printf(OUTPUT_STREAM, "Esperando filho terminar.\n");
    wait();
    // printf(OUTPUT_STREAM, "Filho terminou.\n");
  } else {
    // printf(OUTPUT_STREAM, "Erro\n");
  }
  exit();
}