/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 01:08:51 by aaouni            #+#    #+#             */
/*   Updated: 2022/07/28 19:51:31 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**get_path(char **env)
{
	char	**path;
	char	*path_str;
	int		i;

	i = 0;
	while(env[i])
	{
		if(ft_strncmp(env[i], "PATH", 4) == 0)
		{
			path_str = env[i] + 5;
			path = ft_split(path_str, ':');
			return (path);
		}
		i++;
	}
	return (0);
}

int main(int argc, char **argv, char **env)
{
	// int	fd[2];
	// int	pid1;
	// int	pid2;
	char	**path;
	path = get_path(env);
	int i;
	
	i = 0;
	while(path[i] != NULL)
	{
		printf("%s\n",path[i]);
		i++;
		
	}
		
	if (argc == 5 && argv)
	{
		// path = get_path(env);
		// if (pipe(fd) == -1)
		// 	return (1);
		// pid1 = fork();
		// if (pid1 < 0)
		// 	return (2);
		// if (pid1 == 0)
		// {
		// 	execve();
		// }
			
		
	}
	return 0;
}
