#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name[255];

    printf("Enter your name: ");
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name)); /* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD
    printf("Hello,  %s!\n", name);
=======
    printf("Hello module %s!\n", name);
>>>>>>> 931d46bf3b9eb58ad074d20055f72b79e016d79d
    return 0;
}