#include <iostream>
#include <string.h>

using namespace std;

struct Animal {

  const char* name;
  const char* say;
  char pole[255];
  
  virtual const char* whatDoesItSay(){
    strcpy(pole, name);
    strcat(pole, " dela ");
    strcat(pole, say);
    puts(pole);
    return 0;
  };

    Animal(const char* name, const char* say){
    this->name = name;
    this->say = say;
  }
};

struct Pes : Animal {

  Pes(const char* name, const char* say) : Animal(name, say){}
    
};

struct Liska : Animal {
   
  Liska(const char* name, const char* say) : Animal(name, say){}
    
};

int main() {

Animal* animals[] = {
    new Pes("Pes", "woof"),
    new Liska("Liska", "ringidingidingidingiding")
  };
  for(Animal* animal : animals) {
    animal->whatDoesItSay();
  }
}