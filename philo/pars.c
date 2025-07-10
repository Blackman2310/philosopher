#include "../philo.h"

int ft_isdigit(char *str)
{
    int i ;
    i = 0;
    while(str[i])
    {
        if(!(str[i] >= '0' && str[i] <= '9'))
        return 1;
        i++;
    }
    return 0;
}
int ft_atoi(char *str)
{
    int i = 0;
    int sing = 1;
    int n = 0;

    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sing =-1;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        n*=10;
        n = n + str[i] - 48;
        i++;
    }
    return (n * sing);
}

int init_input(int ac ,char **av)
{
    t_info info;

    info.nbr_philo = ft_atoi(av[1]);
    info.time_to_eat = ft_atoi(av[2]);
    info.time_to_sleep = ft_atoi(av[3]);
    info.time_to_die = ft_atoi(av[4]);                                                                 ]);;
}

