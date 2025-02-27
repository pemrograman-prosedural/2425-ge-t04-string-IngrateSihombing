// 12S24014 - Arion Manurung
// 12S24022 - Ingrate Joy Sihombing

#include <stdio.h>

int main(int _argv, char **_argc) {
  char str[20] ;
  scanf("%20[^\n]" , str) ;

  for(int i = 0; str[i]!= '\0' ; i++) {
    printf("%03d" , (int)str[i]) ;
  
  }
printf ("\n") ;

  return 0;
}
