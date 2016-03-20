#include <communicationProtocol.h>

int getDutycycle(protocol *buffer) {
  if(buffer->Head == 1) {
  return buffer->data[0]
  }
  return 0;
}

int checkForwardCommand(protocol *buffer) {
  if(buffer->Head == 1 && buffer->interface == 1) {
    return buffer->data[1];
  }
  return 0;
}

int checkBackwardCommand(protocol *buffer) {
  if(buffer->Head == 1 && buffer->interface == 2) {
    return buffer->data[1];
  }
  return 0;
}

int checkMakeLeft(protocol *buffer) {
  if(buffer->Head == 1 && buffer->interface == 3) {
    return buffer->data[1];
  }
  return 0;
}


int checkMakeRight(protocol *buffer) {
  if(buffer->Head == 1 && buffer->interface == 4) {
    return buffer->data[1];
  }
  return 0;
}

int getSpeed(protocol *buffer) {
  if(buffer->Send == 2 && )
}
