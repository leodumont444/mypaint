/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** error_handling
*/

#include "../../include/my.h"

static int check_args(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h")){
        my_putstr(
            "USAGE\n\t./my_paint\n\nDESCRIPTION\n\tOpen the my_paint app.\n");
        return SUCCESS;
    }
    if (ac != 1)
        return my_error("Error: invalid number of arguments.\n");
    return SUCCESS;
}

static int check_env(char **env)
{
    if (env[0] == NULL)
        return my_error("Error: invalid environment.\n");
    return SUCCESS;
}

int error_handling(int ac, char **av, char **env)
{
    CHECK_ERROR(check_args(ac, av));
    CHECK_ERROR(check_env(env));
    return SUCCESS;
}
