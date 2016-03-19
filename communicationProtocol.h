#include <stdio.h>

typedef struct {
  unsigned char head;
  unsigned char interface;
  unsigned char data[2];
  unsigned char CRC;
}protocol;

int getDutycycle(protocol *buffer);


