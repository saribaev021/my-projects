#include <unistd.h>
void    ft_hd(char *s1, char *s2)
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
        write(1,"1", 1);
    else
        write(1, "0", 1);
}
int main(int argc, char **argv)
{
    if(argc == 3)
    {
        ft_hd(argv[1], argv[2]);
    }
    write(1, '\n', 1);
    return 0;
}
