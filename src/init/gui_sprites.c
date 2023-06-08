/*
** EPITECH PROJECT, 2023
** my paint
** File description:
** gui_sprites
*/

#include "../../include/my.h"

int init_hover(var_t m)
{
    H_PEN = create_sprite("h_pen.jpg", (V2F){528, 49});
    H_BUCKET = create_sprite("h_bucket.jpg", (V2F){432, 62});
    H_ERASER = create_sprite("h_eraser.jpg", (V2F){389, 114});
    H_LENS = create_sprite("h_lens.jpg", (V2F){473, 114});
    H_PIP = create_sprite("h_pipette.jpg", (V2F){431, 114});
    H_COLOR1 = create_sprite("h_color1.jpg", (V2F){1114, 47});
    H_COLOR2 = create_sprite("h_color2.jpg", (V2F){1184, 47});
    H_SIZE = create_sprite("h_size.jpg", (V2F){1027, 47});
    H_NEW = create_sprite("h_new.jpg", (V2F){2, 39});
    H_SAVE = create_sprite("h_save.jpg", (V2F){2, 174});
    H_EXIT = create_sprite("h_quit.jpg", (V2F){1, 241});
    H_OPEN = create_sprite("h_open.jpg", (V2F){2, 107});
    S_SAVE = create_sprite("save_file.jpg", (V2F){0, 0});
    S_LOAD = create_sprite("load_file.jpg", (V2F){0, 0});
    CHECK_MALLOCS(14,
        H_PEN, H_BUCKET, H_ERASER, H_LENS, H_PIP, H_COLOR1, H_COLOR2, H_SIZE,
        H_NEW, H_SAVE, H_EXIT, H_OPEN, S_SAVE, S_LOAD);
    return SUCCESS;
}

int init_buttons2(var_t m)
{
    C_NEW = create_sprite("h_new.jpg", (V2F){2, 39});
    C_SAVE = create_sprite("h_save.jpg", (V2F){2, 174});
    C_EXIT = create_sprite("h_quit.jpg", (V2F){1, 241});
    C_OPEN = create_sprite("h_open.jpg", (V2F){2, 107});
    C_HELP = create_sprite("help.jpg", (V2F){202, 1});
    C_CIRCLE = create_sprite("circle.jpg", (V2F){618, 52});
    C_RECT = create_sprite("rect.jpg", (V2F){736, 52});
    C_LINE = create_sprite("line.jpg", (V2F){852, 52});
    return SUCCESS;
}

int init_buttons(var_t m)
{
    C_PEN = create_sprite("pen.jpg", (V2F){528, 49});
    C_BUCKET = create_sprite("bucket.jpg", (V2F){432, 62});
    C_ERASER = create_sprite("eraser.jpg", (V2F){389, 114});
    C_LENS = create_sprite("lens.jpg", (V2F){473, 114});
    C_PIP = create_sprite("pipette.jpg", (V2F){431, 114});
    C_COLOR1 = create_sprite("color1.jpg", (V2F){1114, 47});
    C_COLOR2 = create_sprite("color2.jpg", (V2F){1184, 47});
    C_PALETTE = create_sprite("palette.jpg", (V2F){1258, 49});
    C_SIZE = create_sprite("size.jpg", (V2F){1027, 47});
    C_RECT1 = create_rect(sfBlack, (IRECT){1125, 55, 51, 51});
    C_RECT2 = create_rect(sfWhite, (IRECT){1193, 53, 55, 55});
    C_FILE_BTN = create_sprite("file.jpg", (V2F){5, 1});
    C_FILE_GUI = create_sprite("gui_file.jpg", (V2F){3, 40});
    CHECK_ERROR(init_buttons2(m));
    CHECK_MALLOCS(17,
        C_PEN, C_BUCKET, C_ERASER, C_LENS, C_PIP, C_COLOR1, C_COLOR2, C_PALETTE,
        C_SIZE, C_RECT1, C_RECT2, C_FILE_BTN, C_NEW, C_SAVE, C_EXIT, C_OPEN,
        C_HELP);
    return SUCCESS;
}
