/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gkrellm.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 07:51:16 by jchiang-          #+#    #+#             */
/*   Updated: 2020/01/26 13:05:02 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* --------------------------------------------------------------------------- */
/* -----------------------     General Header    ----------------------------- */
/* --------------------------------------------------------------------------- */

#ifndef FT_GKRELLM_HPP
# define FT_GKRELLM_HPP

#include <vector>
#include <string>
#include <iostream>


/* --------------------------------------------------------------------------- */
/* -----------------------      Macro Define     ----------------------------- */
/* --------------------------------------------------------------------------- */

# define ESCAPE_KEY 27
# define CLERA_LINE "                                      "
# define SEPERATE_LINE "=============================================================== "

# define TMPOSITION_Y 2
# define TMPOSITION_X 2
# define CPUPOSITION_Y 5
# define CPUPOSITION_X 2
# define OSPOSITION_Y 12
# define OSPOSITION_X 2
# define NWPOSITION_Y 20
# define NWPOSITION_X 2
# define RMPOSITION_Y 23
# define RMPOSITION_X 2

typedef struct s_point {
	int x;
	int y;
}t_point;

#endif
