/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <unistd.h>
void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
int check_array(char *array, char c, int l)
{
    int i = 0;
    while(i <= l)
    {
        if(array[i] != c)
        {
            return (1);
        }
        i++;
    }
    return (0);
}
char    *ft_intra(char *s1, char *s2)
{
    char array[128];
    int i = 0;
    int l = 0;
    int j;
    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
            {
                if(check_array(array, s1[i], l))
                {
                    array[l] = s1[i];
                    l++;
                }
            }
            j++;
        }
        i++;
    }
    array[i] = '\0';
    ft_putstr(array);
}
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        ft_intra(argv[1], argv[2]);
    }
    write(1, '\n', 1);
    return 0;
}
