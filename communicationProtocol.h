#include <stdio.h>
#define cRead 1;
#define cSend 2;
#define cForwoard 1;
#define cBackword 2;
#define cMakeleft 3;
#define cMakeright 4;
#define cStop 5;
#define cSpeed 6;
#define cSign 7;
#define cSensor1 8;
#define cSensor2 9;
#define cSensor3 10;
#define cSensor4 11;
#define cSensor5 12;
#define cSensor6 13;

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
int getSpeed(protocol *buffer);
int getSign(protocol *buffer);
int getdistance(protocol *buffer);
