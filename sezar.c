#include <stdio.h>
void shift(char *word, int key){
     char c = word[0];
     int i = 0;
     while(c!='\0'){
       if(c>=65&&c<=90){
                        word[i]=(word[i]+key);
                        if(word[i]>90)
                                       word[i]= (word[i]%90)+65;
       }
       if(c>=97&&c<=122){
                        word[i]=(word[i]+key);
                        if(word[i]>122)
                                       word[i]= (word[i]%122)+97;
       }
       i++;
       c=word[i];
     }

}
int main(){
    char word[100]="Hello World";
    printf("Pleas enter key");
    int key;
    scanf("%d",&key);
    shift(word,key);
    printf("encoded :%s\n",word);
    shift(word,-key);
    printf("unencoded:%s",word);
}
