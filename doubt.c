#include <stdio.h>
void scan(char s[]){
  scanf("%[^\n]",s);
}
void print(char s[]){
  printf("%s" ,s);
}
void deleteElem(char s[],char elem){
  
  for(int i=0;s[i]!='\0';i++){
    if(s[i] == elem){
      for(int j=i;s[j]!='\0';j++){
        s[j]=s[j+1];
      }
    }
  }
}

int main(void) {
  char s[100];
  // printf("enter your string ");
  
  scan(s);
  // printf("enter char that you want to delete");
  char elem;
  //scanf("\n");
  scanf("%c",&elem);
  deleteElem(s,elem);
  print(s);
  
  return 0;
}
