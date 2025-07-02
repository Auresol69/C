#include <stdio.h>
#include <ctype.h>
#include <time.h>

// http://www.cplusplus.com/reference/ctype

int main()
{
    // isalnum
    // int i;
    // char str[] = "c3po...";
    // i = 0;
    // while (isalnum(str[i]))
    //     i++;
    // printf("The first %d characters are alphanumeric.\n", i);

    // isblank
    // char c;
    // int i = 0;
    // char str[] = "Example sentence to test isblank\n";

    // while (str[i])
    // {
    //     c = str[i];
    //     if (isblank(c))
    //         c = '\n';
    //     putchar(c);

    //     i++;
    // }

    // iscntrl
    //  kiểm tra xem ký tự đầu vào có thuộc tập hợp các ký tự điều khiển hay không.
    int i = 0;
    char str[] = "first line \n second line \n";
    while (!iscntrl(str[i]))
    {
        putchar(str[i]);
        i++;
    }
    printf("\n");

    // isdigit
    // tương tự isalpha (Có phải là số hay không)

    // isgraph
    int var1 = '3';
    int var2 = '\t';
    int var3 = ' ';

    if (isgraph(var1))
        printf("'%c' is a printable character.\n", var1);
    else
        printf("'%c' is not a printable character.\n", var1);

    // islower

    // isupper

    // isprint // khác với isgraph: kí tự ' ' là kí tự in được, nhưng isgraph sẽ trả về false
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    if (isprint(var2))
        printf("'%c' is a printable character.\n", var2);
    else
        printf("'%c' is not a printable character.\n", var2);

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", cpu_time_used);

    // ispunct
    // check xem có phải là ký tự dấu câu hay không
    int var4 = '!';
    if (ispunct(var4))
        printf("'%c' is a punctuation character.\n", var4);
    else
        printf("'%c' is not a punctuation character.\n", var4);
    if (ispunct(var3))
        printf("'%c' is a punctuation character.\n", var3);
    else
        printf("'%c' is not a punctuation character.\n", var3);

    // isspace
    // kiểm tra xem ký tự có phải là ký tự khoảng trắng hay không

    // isxdigit
    // kiểm tra xem ký tự có phải là chữ số thập lục phân hay không
    char var6[] = "tuts";
    char var7[] = "0xE";
    if (isxdigit(var7[2]))
        printf("'%c' is a hexadecimal digit.\n", var7[2]);
    else
        printf("'%c' is not a hexadecimal digit.\n", var7[2]);

    // tolower

    // toupper

    return 0;
}