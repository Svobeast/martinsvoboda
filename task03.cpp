/*
  Write a "task03" program for basic adding. It should handle -f, -i and -v parameters

  task03 -f data.txt // outputs sum of numbers in data.txt
  task03 -i // interactive mode: sums numbers from standard input until empty input provided
  task03 4 7 12 // outputs sum of any number of arguments (23 in this case)
  implement verbose mode -v, which outputs additional info about arguments, i.e.
    task03 -f data.txt -v // should print "sum of numbers in data.txt is 13"
    task03 -v -f data.txt // same result
    task03 -v -i // should print like "sum of 7 numbers from standard input is 38"
    task03 2 2 13 6 -v // should print "sum of 4 arguments is 23"
    task03 -v 13 4 // should print "sum of 2 arguments is 17"
*/

#include<stdio.h>
#include<string.h>

int cisla;
int suma;


int main(int argc, char*argv[]) { 

  if (strcmp(argv[1],"-i") == 0 ){
    char osmdesat[80];
    while(true) {
      fgets(osmdesat, 50, stdin);
      if(strlen(osmdesat) == 1) {
      break;
      }
      sscanf(osmdesat,"%d", &cisla);
      suma += cisla;  
    }
     printf("Soucet cisel je : %d", suma);
  } 
   
}

