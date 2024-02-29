

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t    i;

    i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

int main(void)
{
    char *prueba = "hola pepe";
    printf("+0: %s\n", prueba);
    printf("+3: %s\n", prueba + 3);
    char arrayc[] = "viva la vida";
    ft_striteri(arrayc, upper);
    printf("%s\n", arrayc);
    return (0);
}
