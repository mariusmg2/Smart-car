#include <communicationProtocol.h>

int getDutycycle(protocol *buffer) {
  if(buffer->Head == 1) {
  return buffer->data[0]
  }
  return 0;
}




