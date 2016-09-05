#include <stdio.h>
#define N 10
void sortArray (char words[][20],char temp[][20]);
int main(int argc, char *argv[])
{
    char words[N][20] = {"Kyiv","Kirov","Dnipro","Kropivnitsky","Vinnitsa","Zhitomir","Lutsk","Lviv","Uzhgorod","Ternopil"};
    char temp [N][20];

    sortArray(words,temp);
    return 0;
}

void sortArray (char words[][20],char temp[][20]){
    int i,j;
    for(i = 0;i < N;i++)
        strcpy (temp[i],words[i]);

    for(i=0;i<N;i++)
        printf("%s\n",words[i]);
    printf("\n");

    for(i=0;i<N-1;i++)
        for(j=i+1;j<N;j++){
            if(strcmp(words[i],words[j])>0){
                strcpy(temp[i],words[i]);
                strcpy(words[i],words[j]);
                strcpy(words[j],temp[i]);
            }
        }
    for(i=0;i<N;i++)
        puts(words[i]);
}
