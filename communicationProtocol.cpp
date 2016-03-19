#include <stdio.h>

typedef struct {
  unsigned char head;
  unsigned char interface;
  unsigned char data[2];
  unsigned char CRC;
}protocol;

const char receive;
const char comandInterface;
const char information;
const char datainfomation;
const char time;
const char duty_cycle;

int getDutycycle(protocol *buffer) {
  if(buffer->Head == 1) {
  return buffer->data[0]
  }
  return 0;
}


