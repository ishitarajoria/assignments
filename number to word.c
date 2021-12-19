#include <stdio.h>
#include <string.h>


int main() {
    char a[20];
    char *single[]={" zer0 "," one "," two "," three "," four"," five "," six "," seven "," eight "," nine "};
    char *double_digit[]={""," ten "," eleve "," twelve "," thirteen "," fourteen "," fifteen "," sixteen "," seventeen "," eighteen "," ninteen "};
    char *tens_place[]={"",""," twenty "," thirty "," fourty "," fifty "," sixty "," seventy "," eighty "," ninty "};
    char *tens_power[]={" hundred "," thousand "};
    
    
    
    printf("enter a no");
    scanf("%s",a);
    int len= strlen(a);
    int num;
    
    if (len==1)
    {
        num=a[0]-48;
        printf("%s",single[num]);    
    }    
        
    if (len==2 && a[0]==49)
    {
        num=(a[0]-48)+(a[1]-48);
        printf("%s",double_digit[num]);
        
    }
    else if (len==2 && a[1]==48)
    {
       num=(a[0]-48)+(a[1]-48); 
       printf("%s",tens_place[num]);
       
    }
    else if (len==2)
    {
        num=(a[0]-48);
        printf("%s",tens_place[num]);
       
        num=(a[1]-48);
        printf("%s",single[num]);
    }
    else if (len==3)
    {
        num=(a[0]-48);
        printf("%s",single[num]);
        
        
        printf("%s",tens_power[0]);
        num=(a[2]-48);
        printf("%s",tens_place[num]);
       
       
    }
    else if (len==4)
    {
        num=(a[0]-48);
        printf("%s",single[num]);
        printf("%s",tens_power[1]);
        num=(a[1]-48);
        printf("%s",single[num]);
        printf("%s",tens_power[0]);
        num=(a[2]-48);
        printf("%s",tens_place[num]);
        num=(a[3]-48);
        printf("%s",single[num]);
       
       
    }
    else
    {
        num=(a[0]-48);
        printf("%s",tens_place[num]);
        num=(a[1]-48);
        printf("%s",single[num]);
        printf("%s",tens_power[1]);
        num=(a[2]-48);
        printf("%s",single[num]);
        printf("%s",tens_power[0]);
        num=(a[3]-48);
        printf("%s",tens_place[num]);
        num=(a[4]-48);
        printf("%s",single[num]);
       
       
    }
    
    
    return 0;
}