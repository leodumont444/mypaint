/*
** EPITECH PROJECT, 2023
** current
** File description:
** pip_tool
*/

#include "../include/my.h"

void pipette(var_t m)
{
    sfRenderTexture_display(T_DRAW);
    sfColor color = sfImage_getPixel(sfTexture_copyToImage(
        sfRenderTexture_getTexture(T_DRAW)), SHAPE(pos).x, SHAPE(pos).y);
    if (STATE(color) == 1){
        m->gui->color1 = color;
        sfRectangleShape_setFillColor(C_RECT1, color);
    } else {
        m->gui->color2 = color;
        sfRectangleShape_setFillColor(C_RECT2, color);
    }
    sfCircleShape_setFillColor(SHAPE(circle), color);
    sfRectangleShape_setFillColor(SHAPE(rect), color);
}
