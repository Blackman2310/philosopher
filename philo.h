#ifndef PHILO_H
#define PHILE_H

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_info
{
    int nbr_philo;
    size_t time_to_die;
    size_t time_to_eat;
    size_t time_to_sleep;
    size_t nbr_of_time_eat;
    size_t start_time;
    int check_die;
}   t_info;

typedef struct s_philo
{
    int id_ph;
    int nbr_eat;
    size_t last_meal;
    pthread_t philo;
    pthread_mutex_lock *right_fork; 
    pthread_mutex_lock *left_fork;
} t_philo;

#endif