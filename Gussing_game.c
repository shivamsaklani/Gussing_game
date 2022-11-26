#include<stdio.h>
#include<string.h>
void details();

    char favf[100];//fav fruit
    char favc[100];//fav car
    char favco[100];//fav color
    char favp[100];//fav place
    char favb[100];//fav book
    char favm[100];//fav movie
    char favd[100];//fav dish
char mine[20];
void details(){
    int r=0;
    char favfi[100];//input fav fruit
    char favci[100];//input fav car
    char favcoi[100];//input fav color
    char favpi[100];//input fav place
    char favbi[100];//input fav book
    char favmi[100];//input fav movie
    char favdi[100];//input fav dish

    system("cls");
    printf("\t\t\t***please don't type in captial letter***\n");
    printf("%s your game is ready and you can ask your friends to guess about you\n",mine);
    printf("%s favourite fruit\n",mine);
    scanf("%s",favfi);
    if(strcmp(favf,favfi)==0){
        printf(":)Correct answer\n");
        r++;
    }
    else{
        printf(":(wrong answer\n");
    }
    printf("%s favourite car\n",mine);
    scanf("%s",favci);
     if(strcmp(favc,favci)==0){
        printf(":)Correct answer\n");
        r++;
    }
    else{
        printf(":(wrong answer\n");
    }
    printf("%s favourite color\n",mine);
    scanf("%s",favcoi);
     if(strcmp(favco,favcoi)==0){
        printf(":)Correct answer\n");
        r++;
    }
    else{
        printf(":(wrong answer\n");
    }
    printf("%s favourite place\n",mine);
    scanf("%s",favpi);
     if(strcmp(favp,favpi)==0){
        printf(":)Correct answer\n");
        r++;
    }
    else{
        printf(":(wrong answer\n");
    }
    printf("%s favourite book\n",mine);
    scanf("%s",favbi);
     if(strcmp(favb,favbi)==0){
        printf(":)Correct answer\n");
        r++;
    }
    else{
        printf(":(wrong answer\n");
    }
    printf("%s favourite movie\n",mine);
    scanf("%s",favmi);
     if(strcmp(favm,favmi)==0){
        printf(":)Correct answer\n");
        r++;
    }
    else{
        printf(":(wrong answer\n");
    }
    printf("%s favourite dish\n",mine);
    scanf("%s",favdi);
     if(strcmp(favd,favdi)==0){
        printf(":)Correct answer\n");
        r++;
    }
    else{
        printf(":(wrong answer\n");
    }
    if(r==7){
        printf("You know very well about %s\n you are true friends",mine);
    }
    else if(r==6){
        printf("You know well about %s\n");
    }
    else if(r==5){
        printf("You know well about %s\n");
    }
    else if(r==4){
        printf("You know well about %s\n");
    }
    else if(r==3){
        printf("You know well about %s\n");
    }
    else if(r==2){
        printf("You know well about %s\n");
    }
    else if(r==1){
        printf("You know well about %s\n");
    }
    else{
        printf("You both are not true friends\n");
    }
}
void main(){
    printf("This is simple gussing game please enter your name\n");
    scanf("%s",mine);
    printf("Let's try how much do you know about your %s\n",mine);
    printf("%s please give your details to proceed further\n",mine);
    printf("\t\t\t***please don't type in captial letter***\n");
    printf(" your favourite fruit\n");
    scanf("%s",favf);
    printf(" your favourite car\n");
    scanf("%s",favc);
    printf(" your favourite color\n");
    scanf("%s",favco);
    printf(" your favourite place\n");
    scanf("%s",favp);
    printf(" your favourite book\n");
    scanf("%s",favb);
    printf(" your favourite movie\n");
    scanf("%s",favm);
    printf(" your favourite dish\n");
    scanf("%s",favd);
    details();
}