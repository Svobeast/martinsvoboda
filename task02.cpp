/*
Decode the task02.dat file and find out the birth dates of John Doe and Sam Sepiol.

format: N records of 6 bytes:
  byte 1-2: birth date yyyyyyyd ddddmmmm (year of birth LSB - 1900)
  byte 3-6: height (float LSB)

separator 0xFF (after N records)
name1|name2|...|nameN|
*/


#include <cstdio>      



unsigned char data[8];


/* unsigned char OtocByty(unsigned char* n) {
    unsigned char result = 0;
    for (int i=0; i<8; ++i) {
      bool bit = n & (1<<i);
      result|= bit<<(7-i);
    }
    return result ;
}                             */

int main() {
    FILE* fd=fopen("task02.dat" , "rb");
     fread(data, 8, 1, fd);
     int m = data[1] & 0b1111;
     int d = data[1]>>4 | ((data[0] & 0b1)<<4);
    // int y = OtocByty(data[0]>>1)>>1;
     printf ("%d.%d.\n" ,d,m);
     
    // printf ("%d.%d.%d\n" ,d,m,y+1900 );
     
}
// nefunguje převod roku je tam nějaký problém s & za n ve funkci for                