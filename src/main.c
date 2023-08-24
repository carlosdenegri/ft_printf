/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadenegr <cadenegr@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:28:02 by cadenegr          #+#    #+#             */
/*   Updated: 2023/08/14 14:28:11 by cadenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main()
{
    ft_printf("Testing ft_printchar:\n");
    ft_printf("Character: %c\n", 'A');

    ft_printf("\nTesting ft_printstr:\n");
    ft_printf("String: %s\n", "Hello");

    ft_printf("\nTesting ft_printnbr:\n");
    ft_printf("Integer: %d\n", 12345);

    ft_printf("\nTesting ft_printpercent:\n");
    ft_printf("Percent: %%\n");

    ft_printf("\nTesting ft_print_hex:\n");
    ft_printf("Hexadecimal (lowercase): %x\n", 255);
    ft_printf("Hexadecimal (uppercase): %X\n", 255);

    ft_printf("\nTesting ft_print_ptr:\n");
    unsigned long long ptr = 0x12345678;
    ft_printf("Pointer: %p\n", (void *)ptr);

    ft_printf("\nTesting ft_print_unsigned:\n");
    ft_printf("Unsigned Integer: %u\n", 4294967295);
    
    ft_printf(" %p \n", -1);
    ft_printf(" %p \n", 1);
    ft_printf(" %p \n", 15);
    ft_printf(" %p \n", 16);
    ft_printf(" %p \n", 17);
    ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
    ft_printf(" %p %p \n", INT_MIN, INT_MAX);
    ft_printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
    ft_printf(" %p %p \n", 0, 0);
    char *s = NULL;
    ft_printf("NULL test =  %p\n", s);
    printf("NULL test =  %p\n", s);
    
    // Edge cases and boundary tests
    ft_printf("Edge cases and boundary tests:\n");
    ft_printf("Printing an empty string: %s\n", "");
    ft_printf("Printing a string with NULL pointer: %s\n", NULL);
    ft_printf("Printing a negative integer: %d\n", -12345);
    ft_printf("Printing a very large integer: %d\n", 2147483647);
    ft_printf("Printing an unsigned integer: %u\n", 4294967295);
    ft_printf("Printing a zero-padded integer: %05d\n", 42);
    ft_printf("Printing a negative zero-padded integer: %05d\n", -42);
    
      // Error handling tests
    ft_printf("Incorrect specifier: %q\n"); // Invalid specifier
    ft_printf("Missing argument: %d\n");    // Missing argument
    ft_printf("Invalid format: %c%d\n", 'A'); // Too few arguments
    ft_printf("Prints twice 0x0 %p %p ", NULL, 0);

    return 0;
}

