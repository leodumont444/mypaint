/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** my_strlen
*/

#include "../include/my.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return i;
}
