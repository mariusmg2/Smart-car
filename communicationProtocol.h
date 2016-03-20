#include <stdio.h>

typedef struct {
  unsigned char head;
  unsigned char interface;
  unsigned char data[2];
  unsigned char CRC;
}protocol;

int getDutycycle(protocol *buffer);
int checkForwardCommand (protocol *buffer);
int checkBackwardCommand (protocol *buffer);
int checkMakeLeft(protocol *buffer);
int checkMakeRight(protocol *buffer);
int checkStop(protocol *buffer);
int checkSpeed(protocol *buffer);
int checkSign(protocol *buffer);
int checkdistance(protocol *buffer);
