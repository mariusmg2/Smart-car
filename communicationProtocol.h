#include <stdio.h>

#define cRead       1;
#define cSend       2;
#define cForwoard   1;
#define cBackword   2;
#define cMakeleft   3;
#define cMakeright  4;
#define cStop       5;
#define cSpeed      6;
#define cSign       7;
#define cSensor1    8;
#define cSensor2    9;
#define cSensor3    10;
#define cSensor4    11;
#define cSensor5    12;
#define cSensor6    13;

typedef struct {
  unsigned char head;
  unsigned char interface;
  unsigned char data[2];
  unsigned char CRC;
} tProtocol;

int getDutycycle(const tProtocol *buffer);
int checkForwardCommand(const tProtocol *buffer);
int checkBackwardCommand(const tProtocol *buffer);
int checkMakeLeft(const tProtocol *buffer);
int checkMakeRight(const tProtocol *buffer);
int checkStop(const tProtocol *buffer);
int getSpeed(const tProtocol *buffer);
int getSign(const tProtocol *buffer);
int getDistance(const tProtocol *buffer);
