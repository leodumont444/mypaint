/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** buttons
*/

#include "../include/my.h"

void change_color_visibility(var_t m)
{
    sp_set_visible(C_COLOR1, STATE(color) == 1 ? true : false);
    sp_set_visible(C_COLOR2, STATE(color) == 2 ? true : false);
    if (STATE(color) == 1){
        sfRectangleShape_setSize(C_RECT1, (V2F){50, 50});
        sfRectangleShape_setPosition(C_RECT1, (V2F){1126, 56});
        sfRectangleShape_setSize(C_RECT2, (V2F){40, 40});
        sfRectangleShape_setPosition(C_RECT2, (V2F){1202, 61});
    } else {
        sfRectangleShape_setSize(C_RECT1, (V2F){40, 40});
        sfRectangleShape_setPosition(C_RECT1, (V2F){1131, 61});
        sfRectangleShape_setSize(C_RECT2, (V2F){51, 51});
        sfRectangleShape_setPosition(C_RECT2, (V2F){1195, 55});
    }
}

void check_tools_buttons(var_t m, sfVector2f mousePos)
{
    tools_buttons(m, mousePos);
    shape_buttons(m, mousePos);
    file_gui_buttons(m, mousePos);
    color_buttons(m, mousePos);
    help_buttons(m, mousePos);
}
