#include<stdio.h>
#include<stdlib.h>
int main(){

    char string1[]="new";
    char string2[]="wen";
    int len_string1=strlen(string1);
    int len_string2=strlen(string2);
    char temp;
    if (len_string1!=len_string2){
         printf("%s and %s are not anagrams! \n", string1, string2);
      return 0;
    }
    else
    {
        /* code */
        for (int i=0 ;i<len_string1;++i){
            for (int j=i+1;j<len_string2;++j){
                if(string1[i]>string1[j]){
                    temp=string1[i];
                    string1[i]=string1[j];
                    string1[j]=temp;
                }
                 if(string2[i]>string2[j]){
                    temp=string2[i];
                    string2[i]=string2[j];
                    string2[j]=temp;
                }

            }
        }
        

     
       printf("\n%s\n%s",string1,string2);
       for(int i=0;i<len_string1;i++){
       if (string1[i]!=string2[i]){
        printf("\nnot anagram"); 
        }
      
       }
       printf("\nanagram");

    
    }

    

}


