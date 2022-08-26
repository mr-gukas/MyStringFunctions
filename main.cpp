#include "str.h"

int main(void)
{
    char line1[40] = "hello";
    char line2[40] = " world!";
    char line3[40] = "";

    printf("line1: %s\n", line1);
    printf("line2: %s\n", line2);
    printf("line3: %s\n", line2);

    printf("Function strLen(line1) result:\n%u\n", strLen(line1));

    printf("Function strnCat(line1, line2, 3) result:\n%s\n", strnCat(line1, line2, 3));

    printf("Function strCat(line1, line2) result:\n%s\n", strCat(line1, line2));

    printf("Function strnCpy(line3, line2, 3) result:\n%s\n", strnCpy(line3, line2, 3));

    printf("Function strCpy(line3, line2) result:\n%s\n", strCpy(line3, line2));

    char line4[] = "12345678";
    char line5[]= "45";

    printf("line4: %s\n", line4);
    printf("line5: %s\n", line5);

    printf("Function strStr(line4, line5) result:\n%s\n", strStr(line4, line5));

    char line6[] = "This is/<my function";
    char line7[] = "/<";

    printf("line6: %s\n", line6);
    printf("line7: %s\n", line7);

    printf("Function strTok(line6, line7) result:\n%s\n", strTok(line6, line7));
    printf("line6: %s\n", line6);

    char symbol = 'i';
    printf("symbol: %c\n", symbol);

    printf("Function strChr(line6, symbol) result:\n%s\n", strChr(line6, symbol));

    printf("Function putStr(line4) result:\n");
    putStr(line4);

    char line8[] = "double_";
    char* line9  = strDup(line8);

    printf("line8: %s\n", line8);

    printf("Function strDup(line8) result:\n%s\n", line9);
    free(line9);


    printf("Function fgetStr(line9, 10, stdin) result:\n");
    fgetStr(line9, 10, stdin);
    printf("%s\n", line9);

    char line10[20] = "";
    printf("Function myGetline(stdin, line10,'<') result:\n");
    myGetline(stdin, line10, '<');
    printf("%s\n", line10);

    fflush(stdin);

    printf("\nThe End\n");

    char newline[20] = "hello";
    fgetStr(newline, 3, stdin);
    printf("%s\n", newline);



    return 0;
}
