/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fourandone.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 07:38:22 by grobert           #+#    #+#             */
/*   Updated: 2022/07/25 14:49:41 by ppoti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	recursionfilling(int board[4][4], int *input);

void	print_board(int board[4][4]);

void	lookfor4_1(int board[4][4], int *input, int pos)
{
	int	fill;

	fill = 0;
	while ((input[pos]) && pos <= 15)
	{
		if ((input[pos] == 4)
			&& ((pos >= 8 && pos <= 11)))
		{
			while (fill < 4)
			{
				board[pos % 4][fill] = fill + 1;
				fill++;
			}
		}
		fill = 4;
		if ((input[pos] == 4) && ((pos >= 12 && pos <= 15)))
		{
			while (fill > 0)
			{
				board[pos % 4][4 - fill] = fill;
				fill--;
			}
		}
		pos++;
	}
}

void	lookfor4_0(int board[4][4], int *input)
{
	int	pos;
	int	fill;

	pos = 0;
	fill = 0;
	while ((input[pos]) && pos < 8)
	{
		if ((input[pos] == 4)
			&& ((pos >= 0 && pos <= 3)))
		{
			while (fill++ < 4)
				board[fill][pos] = fill + 1;
		}
		fill = 4;
		if ((input[pos] == 4) && ((pos >= 4 && pos <= 7)))
		{
			while (fill-- > 0)
				board[4 - fill][(pos % 4)] = fill;
		}
		pos++;
	}
	lookfor4_1(board, input, pos);
}

void	lookfor1(int board[4][4], int *input)
{
	int	pos;

	pos = 0;
	while (input[pos])
	{
		if ((input[pos] == 1) && ((pos >= 0) && (pos <= 3)))
			board[0][pos] = 4;
		if ((input[pos] == 1) && ((pos >= 4) && (pos <= 7)))
			board[3][pos - 4] = 4;
		if ((input[pos] == 1) && ((pos >= 8) && (pos <= 11)))
			board[pos - 8][0] = 4;
		if ((input[pos] == 1) && ((pos >= 12) && (pos <= 15)))
			board[pos - 12][3] = 4;
		pos++;
	}
	lookfor4_0(board, input);
}

int	initboard(int *input)
{
	int	row;
	int	col;
	int	board[4][4];

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	lookfor1(board, input);
	if ((recursionfilling(board, input)) == 1)
		print_board(board);
	else
		write(1, "No Solution", 11);
	return (0);
}
