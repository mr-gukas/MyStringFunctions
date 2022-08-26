#include "str.h"

size_t strLen(const char*  str)
{
    assert (str != NULL);

    size_t strSize = 0;

    while (*str)
    {
        ++strSize;
        ++str;
    }

    return strSize;
}

char* strnCpy(char* dest, const char* source, size_t symbCount)
{
    assert (dest   != NULL);
    assert (source != NULL);
    assert (dest   != source);

    char* ptrDest = dest;

    while (*source && symbCount--)
    {
        *dest = *source;
        ++dest;
        ++source;
    }

    *dest = '\0';

    return ptrDest;
}

char* strnCat(char* dest, const char* source, size_t symbCount)
{
    assert (dest    != NULL);
    assert (source != NULL);

    strnCpy(dest + strLen(dest), source, symbCount);

    return dest;
}

const char* strStr(const char* source, const char* searchable)
{
    assert (source     != NULL);
    assert (searchable != NULL);

    const char* pSearch = searchable;

    while (*source)
    {
        if (*source == *pSearch)
        {
            pSearch++;

            if (!(*pSearch))
            {
                return (source - 1);
            }
        }
        else
        {
            pSearch = searchable;
        }

        source++;
    }

    return NULL;

}

char* strTok(char* str, const char* sep)
{
    assert(str != NULL);
    assert(sep != NULL);

    char* pStr = str;

    if (*pStr == '\0')
    {
        return NULL;
    }

    size_t sepStart = 0;
    char*  sepFrom  = NULL;

    while (*str)
    {
        while (*str && strChr(sep, *str) != NULL)
        {
            if (!sepStart)
            {
                sepFrom  = str;
                sepStart = 1;
            }

            str++;
        }
        if (sepStart)
        {
            *sepFrom = '\0';

            return str;
        }

        ++str;
    }

    return NULL;
}

const char* strChr(const char* str, int ch)
{
    assert (str != NULL);

    while (*str)
    {
        if (*str == ch)
        {
            return str;
        }

        ++str;
    }

    return NULL;
}

int putStr(const char* str)
{
    if (str == NULL || *str == '\0')
    {
        return EOF;
    }
    else
    {
        while (*str)
        {
            putchar(*str);
            str++;
        }

        printf("\n");

        return 1;
    }
}

char* strCpy(char* dest, const char* source)
{
    assert (dest   != NULL);
    assert (source != NULL);
    assert (dest   != source);

    char* ptrDest = dest;

    while (*source)
    {
        *dest = *source;
        ++source;
        ++dest;
    }

    *dest = '\0';

    return ptrDest;
}

char* strCat(char* dest, const char* source)
{
    assert (dest   != NULL);
    assert (source != NULL);

    strCpy(dest + strLen(dest), source);

    return dest;
}

char* fgetStr(char* str, int n, FILE* stream)
{
    if (stream == NULL || str == NULL)
    {
        return NULL;
    }

    char* pStr = str;
    int symbol = 0;
    int   sLen = n;
    int index = 0;

    symbol = fgetc(stream);
    while (n >= 0 && symbol != '\n' && symbol != EOF)
    {
        *pStr  = symbol;
        symbol = fgetc(stream);
        pStr++;
        n--;
        index++;
    }

    if (symbol == EOF && n == sLen)
    {
        return NULL;
    }

    if (index < sLen)
    {
        *(str + index)     = '\n';
        *(str + index + 1) = '\0';
    }
    else
    {
    *(str + index) = '\0';
    }

    return str;
}

char* strDup(const char* str)
{
    assert (str != NULL);

    char *dupStr = (char *) malloc(sizeof (char) * (strLen(str)+1));

    return strCpy(dupStr, str);
}

FILE* myGetline(FILE* stream, char* str, char delim)
{
    assert (str != NULL);

    if (stream == NULL)
        return stream;

    char*  pStr   = str;
    int    symbol = 0;
    int    index  = 0;

    symbol = fgetc(stream);

    while (symbol != delim && symbol != EOF)
    {
        *pStr  = symbol;
        symbol = fgetc(stream);

        ++pStr;
        ++index;
    }

    *(str + index) = '\0';

    return stream;
}






