// 12S24022 - Ingrate Joy Sihombing
// 12S24014 - Arion Dippos Pandapotan Manurung

#include <stdio.h>

int main(int _argv, char **_argc) {
 void UbahMenjadiTeks (int nilai_ascii) {
printf ("%c" , nilai_ascii) ;
  
 }
  int i ;
  char str [60] ;
  scanf ("%60[^\n]" , str);

  for(i = 0; str[i]!='\0' && str[i+1]!='\0' && str[i+2]!='\0' ; i+=3) {
    int nilai_ascii = 0;
    sscanf(&str[i], "%3d", &nilai_ascii);
    UbahMenjadiTeks(nilai_ascii) ;

  }

  printf("\n") ;
  return 0;
}
