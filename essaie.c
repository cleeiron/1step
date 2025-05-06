/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   essaie.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleiron <cleiron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:56:44 by cleiron           #+#    #+#             */
/*   Updated: 2025/05/06 17:27:19 by cleiron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int soustraction(int nb, int nb1)
{
	return (nb - nb1);
}

int main(void)
{
	int nb;
	int nb1;
	int result;

	printf("Choisis deux nombres\n");
	scanf("%d %d", &nb, &nb1);
	result = soustraction(nb, nb1);
	printf("Le resultat est:%d\n", result);
	return (0);
}
