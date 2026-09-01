#include <stdio.h>

int main(void)
{
    char str[] = "Good Morning";
    // printf("%s\n", str);
    int i = 0;
    while (str[i] != '\0')
    {
        str[i]++;
        i++;
    }

    printf("Encrypted: %s\n", str);

    int key;
    printf("If you want to decrypt the string, Enter the key: ");
    scanf("%d", &key);

    if (key != 1) return 1;

    int j = 0;
    while (str[j] != '\0')
    {
        str[j] = str[j] - key;
        j++;
    }

    printf("Decrypted: %s\n", str);
    return 0;
}