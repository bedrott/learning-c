#include <stdio.h>
#include <string.h>
int main(void){
    char anime[100];
    printf("what is your favorite anime? ");
    fgets(anime, sizeof(anime), stdin);
    anime[strcspn(anime, "\n")] = 0;
    printf("wow, %s is so peak!\n", anime);
    return 0;
}
