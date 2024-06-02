#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool isincreasing(char ch[]){
    for (int i = 0; i <strlen(ch)-1; i++)
    {
        if (ch[i]>ch[i+1])
        {
           return false;
        }
        
    }
    return true;
}
bool nonum(char ch[]){
    bool found_letter = false;
    for (int i = 0; i <strlen(ch); ++i) {
        if (ch[i] >= '0' && ch[i] <= '9' && found_letter) {
            return false;
        }
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            found_letter = true;
        }
    }

    return true;
}
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char ch[n];
        scanf("%s",&ch);
        if ( isincreasing(ch)&&nonum(ch))
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}