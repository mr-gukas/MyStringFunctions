#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

/**
 * @brief A function that calculates the length of a string
 * @param [in] A pointer to the string
 * @return Length of a string
 */
size_t strLen(const char* str);

/**
 * @brief A function that copies the contents of one line to\
 * another within a limited number of characters
 * @param [in] origStr The string to copy to
 * @param [in] copyStr The string that is being copied
 * @param [in] Limit on the number of characters
 * @return A pointer to the row to which the data is copied
 */
char* strnCpy(char* origStr, const char* copyStr, size_t symbCount);

/**
 * @brief A function that copies the contents of one line to the end of\
 * another within a limited number of characters
 * @param [in] origStr The string to copy to
 * @param [in] copyStr The string that is being copied
 * @param [in] Limit on the number of characters
 * @return A pointer to the row to which the data is copied
 */
char* strnCat(char* origStr, const char* copyStr, size_t symbCount);

/**
 * @brief Search for the first occurrence of string searchable in string source
 * @param [in] source The string in which the search is performed
 * @param [in] searchable Substring to search in a string source
 * @return A pointer to the first occurrence in source of any sequence\
 * of characters specified in searchable. Null pointer if searchable character\
 * sequence is not included in source
 */
const char* strStr(const char* source, const char* searchable);

/**
 * @brief Splitting a string into parts by the specified separator
 * @param [in] str - pointer to the split line
 * @param [in] sep - pointer to a string containing a set of delimiter characters
 * @return NULL - if the string str cannot be divided into parts.
 * Pointer to the first character of the selected part of the string.
 */
char* strTok(char* str, const char* sep);

/**
 * @brief Search for the first occurrence of a character in a string
 * @param [in] str Pointer to the string in which the search will be performed
 * @param [in] ch The code of the desired character
 * @return A pointer to the desired character, if it is found in the string str, otherwise NULL.
 */
const char* strChr (const char *str, int ch);

/**
 * @brief Output of a string to a standard output stream
 * @param [in] str - pointer to the line to be output
 * @return EOF - in case of an error.
 * Not a negative number if the output was successful
 */
int putStr (const char* str);

/**
 * @brief
 * @param [in] destination - a pointer to the line to which the data will be copied
 * @param [in]source - pointer to the string source of the copied data
 * @return The function returns a pointer to the row to which the data is copied
 */
char* strCpy(char* destination, const char* source);

/**
 * @brief Ñombining strings
 * @param [in] origStr - a pointer to the array to which the string will be added
 * @param [in] copyStr - a pointer to the array from which the string will be copied
 * @return The function returns a pointer to the array to which the string is added
 */
char* strCat(char* origStr, const char* copyStr);

 /**
 * @brief Duplication of lines with allocation of memory for a new line.
 * @param [in] str - pointer to the duplicated string
 * @return NULL - if it is not possible to allocate memory
 * for a new line or copy the line pointed to by the argument str.
 * A pointer to a duplicate string.
 */
char* strDup(const char* str);
/**
 * @brief Reading a string from a specified data stream
 * @param [in] str - pointer to the array in which the read string will be placed
 * @param [in] n -  is the maximum allowed length of the read string
 * @param [in] stream - pointer to the data stream
 * @return In case of successful reading of the string,
 * a pointer to the array in which the read data is placed is returned.
 * Or returns NULL in other ways
 */
char* fgetStr(char* str, int n, FILE* stream);

/**
 * @brief Reads characters from an input stream and places them into a string
 * @param [in] stream - object from which characters are extracted
 * @param [in] str - object where the extracted line is stored
 * @param [in] delim - the delimitation character
 * @return The same as parameter stream
 */
FILE* myGetline(FILE* stream, char* str, char delim = '\n');

