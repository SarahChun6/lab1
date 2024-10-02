#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void inspect(char s[]) {
  int index = 0;
  while(s[index] != 0) {
    printf("%c (%hhu) ", s[index], s[index]);
    index += 1;
  }
  printf("\n");
}

char lower(char c) {
    //if(c >= 'A' && c <= 'Z'){
    if(c >= 65 && c <= 90){
        //return c + 32;
        // could we just flip the 2^5 bit? yes!
        // bitwise operator "or"
        return c | 0b00100000;
    }
    return c; 
}

void lowercase(char s[]) {
  int index = 0;
    //for(int index = 0; index < strlen(s); index++){
    //strlen iterates thru the string so it's inefficient
  while( s[index] != '\0' ) {
    s[index] = lower(s[index]);
    index += 1;
  }
}

int main() {
  char abc[] = "ABC";
  lowercase(abc);
  inspect(abc);

  char mixed[] = "Hello Aaron!";
  lowercase(mixed);
  inspect(mixed);

}