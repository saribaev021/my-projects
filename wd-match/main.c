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
void    ft_wdmatch(char *s1, char *s2)
{
    int i = 0;
    int l = 0;
    int w = 0;
    while(s1[i])
    {
        while(s2[l])
        {
            if(s1[i] == s2[l])
            {
                w++;
                break ;
            }
            l++;
        }
        i++;
    }
    if(s1[w] == '\0')
        ft_putstr(s1);
}
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        ft_wdmatch(argv[1], argv[2]);
    }
    write(1, '\n', 1);
    return 0;
}
