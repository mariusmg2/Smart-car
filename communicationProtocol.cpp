#include <stdio.h>

typedef struct {
  unsigned char Head;
  unsigned char Interface;
  unsigned char Data[2];
  unsigned char CRC;
}protocol;

const char receive;
const char idInterface;
const char time;
const char Duty_cycle;

