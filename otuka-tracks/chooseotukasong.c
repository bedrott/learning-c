#include <stdio.h>

int main(void){
    int option;
    printf("Otuka Tracks\n");
    printf("recommended music\n");
    printf("Artist Information\n");
    printf("Choose an option (1 or 2):\n");
    scanf("%d", &option);
    if (option == 1){
        printf("\nSong of the day: Skin!\n");
    } else if (option == 2){
        printf("\nOtuka makes sensational tracks in the electronic/indie style!\n");
    } else {
        printf("\nInvalid option! Enter 1 or 2.\n");
    }
    return 0;
}
