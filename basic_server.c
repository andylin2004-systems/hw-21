#include "pipe_networking.h"


int main() {
  int to_client;
  int from_client;

  while(1){
    from_client = server_handshake( &to_client );

    while(1){
      char input[BUFFER_SIZE] = {0};
      if (read(from_client, input, sizeof(input)) == 0){
        break;
      }
      printf("%s", input);
    }
  }
}
