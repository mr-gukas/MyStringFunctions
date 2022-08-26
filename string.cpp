#include "str.h"

size_t strLen(const char*  str)
{
    assert (str != NULL);

    size_t strSize = 0;

    while (*str)
    {
        strSize++;
        str++;
    }

    return strSize;
}

char* strnCpy(char* origStr, const char* copyStr, size_t symbCount)
{
    assert (origStr != NULL);
    assert (copyStr != NULL);
    assert (origStr != copyStr);

    char* pOrig = origStr;

    while (*copyStr && symbCount--)
    {
        *origStr = *copyStr;
        origStr++;
        copyStr++;
    }

    *origStr = '\0';

    return pOrig;
}

char* strnCat(char* origStr, const char* copyStr, size_t symbCount)
{
    assert (origStr != NULL);
    assert (copyStr != NULL);

    strnCpy(origStr + strLen(origStr), copyStr, symbCount);

    return origStr;
}

const char* strStr(const char* source, const char* searchable)
{
    assert (source != NULL);
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

    if (!(*pStr))
    {
        return NULL;
    }

    size_t sepStart = 0;
    char* sepFrom = NULL;

    while (*str)
    {
        while (*str && strChr(sep, *str) != NULL)
        {
            if (!sepStart)
            {
                sepFrom = str;
                sepStart = 1;
            }

            str++;
        }
        if (sepStart)
        {
            *sepFrom = '\0';

            return str;
        }

        str++;
    }

    return NULL;
}

const char* strChr(const char* str, int ch)
{
    while (*str)
    {
        if (*str == ch)
        {
            return str;
        }

        str++;
    }

    return NULL;
}

int putStr(const char* str)
{
    if (*str == '\0' || str == NULL)
    {
        return EOF;
    }
    else
    {
        while (*str)
        {
            printf("%c", *str);
            str++;
        }

        printf("\n");

        return 1;
    }
}

char* strCpy(char* origStr, const char* copyStr)
{
    assert (origStr != NULL);
    assert (copyStr != NULL);
    assert (origStr != copyStr);

    char* pOrig = origStr;

    while (*copyStr)
    {
        *origStr = *copyStr;
        origStr++;
        copyStr++;
    }

    *origStr = '\0';

    return pOrig;
}

char* strCat(char* origStr, const char* copyStr)
{
    assert (origStr != NULL);
    assert (copyStr != NULL);

    strCpy(origStr + strLen(origStr), copyStr);

    return origStr;
}

char* fgetStr(char* str, int n, FILE* stream)
{
    if (stream == NULL or str == NULL)
    {
        return NULL;
    }

    char* pStr = str;
    char symbol = 0;
    int sLen = n;

    fscanf(stream, "%c", &symbol);
    while (n >= 0 && symbol != '\n' && symbol != EOF)
    {
        *pStr = symbol;
        fscanf(stream, "%c", &symbol);
        pStr++;
        n--;
    }

    if (symbol == EOF && n == sLen)
    {
        return NULL;
    }

    *(str + sLen) = '\0';
    return str;
}

char* strDup(const char* str)
{
    char *dupStr = (char *) malloc(sizeof (char) * (strLen(str)+1));

    return strCpy(dupStr, str);
}

FILE* myGetline(FILE* stream, char* str, char delim)
{
    assert (str != NULL);

    if (stream == NULL)
        return stream;

    char* pStr = str;
    char symbol = 0;
    int index = 0;

    fscanf(stream, "%c", &symbol);

    while (symbol != delim && symbol != EOF)
    {
        *pStr = symbol;
        fscanf(stream, "%c", &symbol);
        pStr++;
        index++;
    }

    *(str + index) = '\0';

    return stream;
}






