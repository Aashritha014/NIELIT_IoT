#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    int c_int = (int)c;
    switch(c_int) 
    {  
        case 'a'...'z':
        //if (c >= 97 && c <= 122){
        printf("Lowercase letter\n");
        break;

        case 'A'...'Z':
            //(c >= 65 && c <= 90) ;
            printf("Uppercase letter\n");
        break;

        case '0'...'9':
            //(c >= 48 && c <= 57) ;
        printf("Digit\n");
        break;
        
        default:
            printf("None of the above\n");
    }

    return 0;
}







/* ASCII values(if else version)

#include<stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 97 && c <= 122) { // 'a' to 'z'
        printf("Lowercase letter\n");
    } else if (c >= 65 && c <= 90) { // 'A' to 'Z'
        printf("Uppercase letter\n");
    } else if (c >= 48 && c <= 57) { // '0' to '9'
        printf("Digit\n");
    } else {
        printf("None of the above\n");
    }
    return 0;
}

*/
