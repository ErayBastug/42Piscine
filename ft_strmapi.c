char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;
    
    i = 0;
    str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
    if (str == NULL)
        return (NULL);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = 0;
    return (str);
}
