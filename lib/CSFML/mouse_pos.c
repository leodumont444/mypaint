/*
** EPITECH PROJECT, 2023
** CSFML LIB
** File description:
** mouse_pos
*/

#include "../../include/my.h"

sfVector2f get_pxmousepos(sfRenderWindow *window)
{
    return sfRenderWindow_mapPixelToCoords(window,
        sfMouse_getPositionRenderWindow(window), NULL);
}
