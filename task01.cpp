#include <cstdio>
#include <string.h>

char output[255];


const char* toUpper(const char* inputx) {
  char inputpole[strlen(inputx) + 1];
  strncpy(inputpole, inputx, sizeof inputpole);
  for(int i = 0; i < strlen(inputpole); i++) {
    if(inputpole[i] > 96 &&  inputpole[i] < 123){
      inputpole[i] = inputpole[i] - 32;
    }
    else {
      inputpole[i] = inputpole[i];
    }
  }
  strcpy (output,inputpole);
  return output;
}

int main() {
  const char* input = "Hello, world!";
  printf("%s", toUpper(input));
  return 0;
}