#include "../philo.h"

int check_arg(char **av)
{
    int i;
     
    i = 0;
    while(av[i])
    {
        if(ft_isdigit(av[i]) == 1)
        return (1);
        i++;
    }
    return (0);
}

int main(int ac, char **av)
{
    if(ac != 5 && ac != 6)
    {
        write(2,"worng input\n",12);
        return (1);
    }
    if(check_arg(av) == 1 || (ft_atoi(av[1]) <= 0) ||  ft_atoi(av[2]) <= 0 
    || ft_atoi(av[3]) <= 0 || ft_atoi(av[4]) <= 0 || ft_atoi(av[5]) <= 0)
    {
        write(2,"invalid input\n",14);
        return (1);
    }
    if(init_input(ac,av)== 1)
    return(0);

    return (0);
}
