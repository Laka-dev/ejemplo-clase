#include <stdio.h>
#include <string.h>

int main(){
    char user_name[30];
    printf("Por favor escriba su nombre: \n");
    scanf("%s", user_name);
    // printf("%s", user_name);
    if ((strcmp(user_name, "Arturo") == 0) || (strcmp(user_name, "arturo") == 0)) {
        printf("Muchas gracias por hacer la asginatura tan amena %s!", user_name);
    } else {
        printf("Muchas gracias por su trabajo!");
    }

    return 0;
}