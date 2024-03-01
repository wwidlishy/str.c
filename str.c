#include <stdlib.h>

typedef struct str
{
    char* value;
} str;

void setstr(str* string, char* value)
{
    string->value = value;
}

char* retstr(str* string)
{
    return string->value;
}

int lenstr(char* a)
{
    int index = 0;
    while(a[index] != '\0') index++;
    index++;
    return index;
}

char* addstr(char* a, char* b)
{
    char* result = (char*)malloc(sizeof(a) + sizeof(b));
    for (int index = 0; index < lenstr(a); index++) result[index] = a[index];
    for (int index = 0; index < lenstr(b); index++) result[lenstr(a) - 1 + index] = b[index];
    return result;
}

char* substr(char* string, int start, int end)
{
    char* result = (char*)malloc(sizeof(string));

    int maxIndex = lenstr(string);
    if (start >= 0 && start <= maxIndex && end >= 0 && end <= maxIndex && start <= end)
    {
        for (int i = 0; i <= end - start; i++)
        {
            result[i] = string[start+i];
            if (i == end - start) result[i+1] = '\0';
        }
    } else {
        result = "\0";
    }
    return result;
}

int cmpstr(char* a, char* b)
{
    while (*a != '\0' && *a == *b) {
        a++;
        b++;
    }
    
    return *(unsigned char *)a - *(unsigned char *)b;
}