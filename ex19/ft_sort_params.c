/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoindro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:37:28 by gmoindro          #+#    #+#             */
/*   Updated: 2019/04/03 15:14:38 by gmoindro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
		a++;
	return (s1[a] - s2[a]);
}

void	print(int argc, char **argv)
{
	int		a;
	int		b;

	a = 1;
	b = 0;
	while (a < argc)
	{
		while (argv[a][b] != '\0')
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		a++;
		b = 0;
	}
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*i;

	a = 1;
	b = 0;
	while (a + 1 < argc)
	{
		if (ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			i = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = i;
			a = 0;
		}
		a++;
	}
	if (argc > 1)
		print(argc, argv);
	return (0);
}
