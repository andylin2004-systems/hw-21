#include "pipe_networking.h"


int main() {
  int to_server;
  int from_server;

  from_server = client_handshake( &to_server );

  while(1){
    char input[BUFFER_SIZE] = {0};
    read(STDIN_FILENO, input, sizeof(input));
    write(to_server, input, sizeof(input));
  }
}
