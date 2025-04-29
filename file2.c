#include <stdio.h>
#include <string.h>

void vulnerable_function() {
    char buffer[10];
    printf("Enter some text: ");
    gets(buffer);  // ❌ Dangerous function
    printf("You entered: %s\n", buffer);
}

int main() {
    vulnerable_function();
    return 0;
}

