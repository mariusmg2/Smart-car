#include "communicationProtocol.h"

int getDutycycle(const tProtocol *buffer) {
  if(buffer->Head == 1) {
    return buffer->data[0]
  }
  return 0;
}

int checkForwardCommand(const tProtocol *buffer) {
  if(buffer->Head == 1 && buffer->interface == 1) {
    return buffer->data[1];
  }
  return 0;
}

int checkBackwardCommand(const tProtocol *buffer) {
  if(buffer->Head == 1 && buffer->interface == 2) {
    return buffer->data[1];
  }
  return 0;
}

int checkMakeLeft(const tProtocol *buffer) {
  if(buffer->Head == 1 && buffer->interface == 3) {
    return buffer->data[1];
  }
  return 0;
}

int checkMakeRight(const tProtocol *buffer) {
  if(buffer->Head == 1 && buffer->interface == 4) {
    return buffer->data[1];
  }
  return 0;
}

int getSpeed(const tProtocol *buffer) {
  if(buffer->Send == 2 && )
}
