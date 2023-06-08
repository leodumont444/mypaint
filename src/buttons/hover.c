/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** hover
*/

#include "../../include/my.h"

static void check_h_file_gui(var_t m, sfVector2f mousePos)
{
    if (STATE(file) == true){
        draw_if_hover(WDW, B_NEW, H_NEW, mousePos);
        draw_if_hover(WDW, B_OPEN, H_OPEN, mousePos);
        draw_if_hover(WDW, B_SAVE, H_SAVE, mousePos);
        draw_if_hover(WDW, B_EXIT, H_EXIT, mousePos);
    }
}

static void check_h_tools(var_t m, sfVector2f mousePos)
{
    draw_if_hover(WDW, B_ERASER, H_ERASER, mousePos);
    draw_if_hover(WDW, B_BUCKET, H_BUCKET, mousePos);
    draw_if_hover(WDW, B_PEN, H_PEN, mousePos);
    draw_if_hover(WDW, B_PIP, H_PIP, mousePos);
    draw_if_hover(WDW, B_LENS, H_LENS, mousePos);
    draw_if_hover(WDW, B_SIZE, H_SIZE, mousePos);
}

static void check_h_colors(var_t m, sfVector2f mousePos)
{
    if (is_mouse_on_sprite(B_COLOR1, mousePos)){
        sfRenderWindow_drawSprite(WDW, H_COLOR1, NULL);
        if (STATE(color) == 2){
            sfRectangleShape_setSize(C_RECT1, (V2F){50, 50});
            sfRectangleShape_setPosition(C_RECT1, (V2F){1126, 56});
        }
    }
    if (is_mouse_on_sprite(B_COLOR2, mousePos)){
        sfRenderWindow_drawSprite(WDW, H_COLOR2, NULL);
        if (STATE(color) == 1){
            sfRectangleShape_setSize(C_RECT2, (V2F){51, 51});
            sfRectangleShape_setPosition(C_RECT2, (V2F){1195, 55});
        }
    }
}

void check_hover(var_t m, sfVector2f mousePos)
{
    check_h_tools(m, mousePos);
    check_h_file_gui(m, mousePos);
    check_h_colors(m, mousePos);
}
