#include <unistd.h>
int ft_check_space(char *str, int i)
{
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\v' && str[i] != '\f')
        {
            return(1);
        }
        i++;
    }
    return(0);
}
int ft_check_word(char *str, int i)
{
        while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
        {
            i++;
        }
        if(str[i] == ' ' || str[i] == '\t')
        {
            if(ft_check_space(str, i))
                return (1);
        }
    return(0);
}
void    ft_last_word(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        while(str[i] == ' ' || str[i] == '\t')
        {
            i++;
        }
        if(!(ft_check_word(str, i)))
        {
            while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
            {
                write(1, &str[i], 1);
                i++;
            }
            return ;
        }
        while(str[i] != ' ' && str[i] != '\t')
        {
            i++;
        }
    }
}
int main(int argc, char **argv)
{
	if(argc == 2)
    	ft_last_word(argv[1]);
	/*write(1,'\n',1);*/
    return 0;
}
