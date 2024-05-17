#include <iostream>
#include "text.h"

void entertext(char *text) {
    printf("Wprowadz Tekst -\n");
    fgets(text,99,stdin);
}
void big_Letters(char *ciag)
{
    while (*ciag)
    {
        if ('a' <= *ciag && *ciag <= 'z')
        {
            *ciag -= ('a' - 'A');
        }
        ciag++;
    }
}
void small_Letters(char *ciag)
{
    while (*ciag)
    {
        if ('A' <= *ciag && *ciag <= 'Z')
        {
            *ciag += ('a' - 'A');
        }
        ciag++;
    }
}
void clear(void)
{
    while(getchar()!= '\n');
}