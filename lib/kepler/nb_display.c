/*
** EPITECH PROJECT, 2022
** my put nbr bin
** File description:
** display a nbr in binary
*/

#include "my.h"

int nb_display(long long nb)
{
    static float count = 0;

    if (nb > INT_MAX)
        return 0;
    if (nb < 0) {
        char_display('-');
        nb_display(-nb);
        count++;
    } else if (nb > 9) {
        nb_display(nb / 10);
        nb_display(nb % 10);
        count += 0.5F;
    } else {
        char_display((char)(nb + '0'));
        count++;
    }
    return (int)count;
}
