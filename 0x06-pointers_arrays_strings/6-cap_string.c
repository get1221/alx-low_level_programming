
/**
 * cap_string - capital all words
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int g;

	g = 0;

	while (s[g] != '\0')
	{
		 if ((s[g] == ' ' || s[g - 1] == '\n'
					|| s[g - 1] == '\t' || s[g - 1] == ','
					|| s[g - 1] == ';' || s[g - 1] == '!'
					|| s[g - 1] == '?' || s[g - 1] == '"'
					|| s[g - 1] == '(' || s[g - 1] == ')'
					|| s[g - 1] == '{' || s[g - 1] == '}'
					|| s[g - 1 == '.')
				&& (s[g] >= 'a' && s[g] <= 'z'))
		{
			s[g] = s[g] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[g] = s[g];
		}
		g++;
	}
	return (s);
}
