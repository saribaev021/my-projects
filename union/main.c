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
        if(array[i] == c)
        {
            return (0);
        }
        i++;
    }
    return (1);
}
void    ft_union(char *s1, char *s2, int l)
{
    int i = 0;
    while(s2[i])
    {
        if(s1[i] != s2[i])
        {
            if(check_array(s1, s2[i], l))
            {
                s1[l] = s2[i];
                l++;
            }
        }
        i++;
    }
    s1[l] = '\0';
    ft_putstr(s1);
}
char    ft_intra(char *s1, char *s2)
{
    char array[128];
    int i = 0;
    int l = 0;
    int j;
    while(s1[i])
    {
      if(check_array(array, s1[i], l))
      {
        array[l] = s1[i];
        l++;
      }
      i++;
    }
    ft_union(array, s2, l);
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

