#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argvl[])
{
  if (argc !=2)
{
printf("useage: ./ceasar key \n");
return 1;
}
int key = atoi(argvl[1]);
string text = get_string("plaintext: ");
printf("ciphertext: ");
for (int i = 0; i < strlen(text); i++)
{
char c = text[i];
if(isupper(C))
{
printf("%c", (c - 'A' + key) % 26 + 'A');
}
else if (islower(C))
  printf("%c", c)
    }
}
printf("\n");
}
