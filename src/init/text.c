/*
** EPITECH PROJECT, 2023
** current
** File description:
** text
*/

#include "../../include/my.h"

int init_text(var_t m)
{
    m->gui->font = sfFont_createFromFile("./fonts/Dimbo.ttf");
    CHECK_MALLOC(m->gui->font);
    m->gui->buttons->save_text = sfText_create();
    CHECK_MALLOC(m->gui->buttons->save_text);
    sfText_setFont(m->gui->buttons->save_text, m->gui->font);
    sfText_setCharacterSize(m->gui->buttons->save_text, 70);
    sfText_setFillColor(m->gui->buttons->save_text, sfBlack);
    sfText_setPosition(m->gui->buttons->save_text, (sfVector2f) {572, 434});
    return SUCCESS;
}
