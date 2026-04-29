#include <stdio.h>

int main(){
    char name[50];
    int myAge;

    int theirAge = 15;
    
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &myAge);

    printf("\nHello %s! I am %d years old\n", name, theirAge);

    if(myAge < theirAge){
        printf("\nYou are younger than me!");
    } else if(myAge == theirAge){
        printf("\nWe are the same age!");
    } else {
        printf("\nYou are older than me!");
    }
    return 0;
}