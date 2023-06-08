/*
** EPITECH PROJECT, 2023
** lib c
** File description:
** lib_c
*/

#pragma once

/* ######    GLOBAL MACROS        ###### */



    #define FAILURE 84
    #define SUCCESS 0
    #define CHECK_ERROR(f) if (f == FAILURE) return FAILURE
    #define CHECK_ERROR_MAIN(f) if (f == FAILURE) return end_main(FAILURE)
    #define CHECK_MALLOC(p) if (p == NULL) return FAILURE
    #define CHECK_MALLOCS(n, ...) if (verif_malloc(n, __VA_ARGS__) == FAILURE) \
                return FAILURE



/* ######    LIB FUNCTIONS        ###### */



/**
    * @brief Print an error message on the standard error output.
    * @param str
    * @return FAILURE (84)
*/
int my_error(char *str);


/**
    * @brief compare two strings
    * @param str1
    * @param str2
    * @return 1 if the strings are identical, 0 otherwise
*/
int my_strcmp(char *str1, char *str2);


/**
    * @brief return the length of a string
    * @param str
    * @return the length of the string
*/
int my_strlen(char const *str);


/**
    * @brief copy a string into another
    * @param dest
    * @param src
*/
void my_strcpy(char *dest, char *src);

/**
    * @brief free all the mallocs
    * @return SUCCESS (0)
    * @return FAILURE (84)
*/
int end_main(int return_value);

/**
    * @brief strcat (nbr) strings
    * @param nbr - number of strings to concate
    * @param ... - strings to concate
    * @return (char *) concatenated strings
*/
char *supercat(int nbr, ...);

/**
 * @brief print a string on the standard output
 * @param str
 * @return the length of the string
*/
int my_putstr(char *str);

/**
    *@brief check if a malloc failed
    *@param nbr the number of arguments, followed by the arguments
    *@return FAILURE
*/
int verif_malloc(int nbr, ...);

/**
 * @brief check if a char is a alphabetical character
 * @param c
 * @return 1 if the char is a alphabetical character, 0 otherwise
*/
int is_alpha(char c);
