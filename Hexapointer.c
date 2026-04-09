#include "ft_printf.h"

int ft_puthex(unsigned int n, int uppercase)
{
    char *base;
    int count = 0;

    if (uppercase)
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";

    if (n >= 16)
        count += ft_puthex(n / 16, uppercase);
    count += ft_putchar(base[n % 16]);
    return count;
}

#include "ft_printf.h"

static int ft_putptr_hex(unsigned long n)
{
    int count = 0;

    if (n >= 16)
        count += ft_putptr_hex(n / 16);
    count += ft_putchar("0123456789abcdef"[n % 16]);
    return count;
}

int ft_putptr(void *ptr)
{
    int count = 0;

    count += ft_putstr("0x");
    count += ft_putptr_hex((unsigned long)ptr);
    return count;
}
