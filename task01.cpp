#include <cstdio>
#include <cctype>

char* toUpper(char* input) {
  int i=0;
  char text;
  while (input[i])
  {
    text=input[i];
    putchar (toupper(text));
    i++;
  }
  return 0;
}

 int main() {
	char input[] = "Hello, World!";
	puts(toUpper(input)); }