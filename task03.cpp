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
 //inspirace by Teemo6                                         

#include<cstdio>
#include<string.h>

int outputNum;
int inputCount = 0;
int argument;
char* fileName;
int fileCount = 0;
bool parV = false;
bool parI = false;
bool parF = false;
bool bugFix = false;

int funInter(){
  char input[100];
  int inputInt;
  int result = 0;
  while (input[0] != '\n'){
    fgets (input,100,stdin);
    if (input[0] != '\n'){
      sscanf(input,"%d",&inputInt);
      result += inputInt;
      inputCount++;
    }
  }
  return result;
}

int file(char* name){
  int vysledek = 0;
  int num;
  FILE * soubor;
  soubor = fopen (name,"r");
  if (soubor!=NULL){
    fileName = name;
    parF = true;
    while(!feof(soubor)){
      fscanf (soubor, "%i", &num);
      vysledek += num;
      fileCount++;
    }
    vysledek -= num;
    fileCount--;
    fclose (soubor);
  } else {
    printf("Slozka neexistuje!");
    bugFix = true;
  }
  return vysledek;
}

int main(int argc, char *argv[]){
      //vstup         
  for (int i=0;i<argc;i++){
    if ((strcmp(argv[i],"-i") == 0) || (strcmp(argv[i],"-v") == 0) || (strcmp(argv[i],"-f") == 0)){
        // parametr I
      if (strcmp(argv[i],"-i") == 0){
        parI = true;
        outputNum = funInter();
      }
        // parametr V
       if (strcmp(argv[i],"-v") == 0){
        parV = true;
      }
        // parametr F
      if (strcmp(argv[i],"-f") == 0){
        if (i <= argc-2){
          outputNum = file(argv[i+1]);
        } else {
          printf("Po parametru -f zadej jmeno slozky!");
          bugFix = true;
        }
      }
      // bez parametru
    } else {
      sscanf(argv[i],"%d",&argument);
      outputNum += argument;
    }
  }
    // Output
  if (parV == true){
    if (parI == true || parF == true){
      if (parI == true){
        printf ("Sum of %d numbers from standard input is %d",inputCount,outputNum);
      }
      if (parF == true){
        printf ("Sum of %d numbers from file %s is %d",fileCount,fileName,outputNum);
      }
    } else {
      if (bugFix == false){
        printf ("Sum of %d numbers from arguments is %d",(argc-2),outputNum);
      }
    }
  } else {
    if (bugFix == false){
      printf ("%d",outputNum);
    }
  }
}                                                                                                                                               










































































































 