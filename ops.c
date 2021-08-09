#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void clear();
int ops(char**, int, char*);

int main(void){

char op1[200] = "Appppplleeeee";
char op2[200] = "Graaaappppesssss";
char op3[200] = "Chochalet e eeeeeee";
char op4[200] = "omer.erbilgin1@gmail.com";
char op5[200] = "Notinh imortant";

char* opss[5] = {op1, op2, op3, op4, op5};

char *question = "Ding danf dong select n option";

int ans = ops(opss, 4, question);

switch(ans){

    case 0: {

        printf("\n1");
                break;

    }
    case 1: {

        printf("\n2");
        break;

    }
    case 2: {

        printf("\n3");
        break;

    }
    case 3: {
        printf("\n4");

        break;
    }
    case 4: {

        printf("\n5");
        break;

    }
default: {

    // should never reach here 
    puts("Error");

}
}

}

int ops(char* text[], int x, char* question){

    clear();

    int count = 0;
    int slen[x];

    char *tmpfmem;
    
    for(int i = 0; i <= x; i++){
        slen[i] = strlen(text[i]);
        // to see the strings manually, uncomment the below line
        // printf("\nstring = %s | lenght = %d", text[i], slen[i]);
    }

    int tmp;
    char *temp;    
    int n = sizeof(slen)/sizeof(slen[0]);

    for (int i = 0; i < n-1; i++){     
     
    for (int j = 0; j < n-i-1; j++){
           if (slen[j] > slen[j+1]){
              // swapping  
              tmp = slen[j+1];
              slen[j+1] = slen[j];
              slen[j] = tmp;
              
              temp = text[j+1];
              text[j+1] = text[j];
              text[j] = temp;
           }
    }
    }

//  Uncomment for testing the previous code 
//    for(int i = 0; i <= x; i++){
//        printf("\n%d | %s",slen[i], text[i]);
//    }
    int tmp2;
    for(int i = x; i > 0; i--){
        tmp2 = slen[0] - slen[i];
        for(int j = 0; j < tmp2; j++){
            tmpfmem = malloc(200);
            tmpfmem = text[i];
            strcat(tmpfmem, " ");
            text[i] = malloc(200);
            text[i] = tmpfmem;
        }
    }

    printf("\n%s\n\n", question);

    for(int i = 0; i <= x; i++){

        if(i == count){
            printf("%s [X]\n", text[i]);
            continue;
        }
        printf("%s [ ]\n",text[i]);

    }

    res:

    system("/bin/stty raw");
    char nav = getchar();

    if(nav == 'w'){

        system("/bin/stty cooked");

        if(count == 0){
            count = x + 1;
        }

        count--;
        clear();

        printf("\n%s\n\n", question);

        for(int i = 0; i <= x; i++){

        if(i == count){
            printf("%s [X]\n", text[i]);
            continue;
        }
        printf("%s [ ]\n",text[i]);

        }

        goto res;

    }
    else if(nav == 's'){

        system("/bin/stty cooked");

        if(count == x){
            count = -1;
        }

        count++;
        clear();

        printf("\n%s\n\n", question);

        for(int i = 0; i <= x; i++){

        if(i == count){
            printf("%s [X]\n", text[i]);
            continue;
        }
        printf("%s [ ]\n",text[i]);

        }

        goto res;

    }
    else if(nav == 13){
        
        system("/bin/stty cooked");
        clear();

        printf("\n%s\n\n", question);

        for(int i = 0; i <= x; i++){

        if(i == count){
            printf("%s [X]\n", text[i]);
            continue;
        }

        printf("%s [ ]\n",text[i]);

        }

        printf("\n\n");
        return count;

    }
    else if(nav == 3){

        system("/bin/stty cooked");
        clear();

        printf("\n%s\n\n", question);

        for(int i = 0; i <= x; i++){

        if(i == count){
            printf("%s [X]\n", text[i]);
            continue;
        }

        printf("%s [ ]\n",text[i]);

        }

        printf("\n\n");
        printf("Exiting program, have a nice day\n\n-*");
        exit(1);
    }
    else{

        system("/bin/stty cooked");

        clear();

        printf("\n%s\n\n", question);

        for(int i = 0; i <= x; i++){

        if(i == count){
            printf("%s [X]\n", text[i]);
            continue;
        }

        printf("%s [ ]\n",text[i]);

        }

        goto res;

    }
    
}

void clear(){
system("clear");
system("clear");
}