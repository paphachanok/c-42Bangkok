#include <unistd.h>

int	checksintax(char *input)
{
	int	i;
	int	err;

	i = 0;
	err = 0;
	while (input[i])
	{
		if (input[i] == '4')
			err++;
		i++;
	}
	if (err > 2)
		return (0);
	i = 0;
	err = 0;
	while (input[i])
	{
		if (input[i] == '1')
			err++;
		i++;
	}
	if (err != 4)
		return (0);
	return (1);
}

int	checkinput(char *arg, int *input)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	if (checksintax(arg) == 1)
	{
		while (arg[i])
		{
			if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')
					|| ((arg[i + 1] == 0) && (arg[i - 1] == ' '))))
			{
				input[out] = (arg[i] - '0');
				out++;
				i++;
			}
			if ((arg[i] >= 9 && arg[i] <= 13) || arg[i] == 32)
				i++;
			else
				return (out);
		}
		input[out] = '\0';
		return (out);
	}
	return (0);
}


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

int	lookfor0(int board[4][4], int *r, int *c)
{
	*r = 0;
	*c = 0;
	while (*r < 4)
	{
		*c = 0;
		while (*c < 4)
		{
			if (board[*r][*c] == 0)
				return (1);
			*c += 1;
		}
		*r += 1;
	}
	return (0);
}

int	check_col_up(int board[4][4], int col, int num)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	count = 1;
	max = board[i][col];
	while (i < 4)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i++;
	}
	if (count == num)
		return (1);
	return (0);
}

int	check_col_down(int board[4][4], int col, int num)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	count = 1;
	max = board[i][col];
	while (i >= 0)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i--;
	}
	if (count == num)
		return (1);
	return (0);
}

int	check_row_left(int board[4][4], int row, int num)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	count = 1;
	max = board[row][i];
	while (i < 4)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i++;
	}
	if (count == num)
		return (1);
	return (0);
}

int	check_row_right(int board[4][4], int row, int num)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	count = 1;
	max = board[row][i];
	while (i >= 0)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i--;
	}
	if (count == num)
		return (1);
	return (0);
}

int	checkboard(int board[4][4], int *in_num)
{
	int	i;

	i = 0;
	while (in_num[i])
	{
		if (i >= 0 && i <= 3)
			if (!check_col_up(board, i, in_num[i]))
				return (0);
		if (i >= 4 && i <= 7)
			if (!check_col_down(board, i - 4, in_num[i]))
				return (0);
		if (i >= 8 && i <= 11)
			if (!check_row_left(board, i - 8, in_num[i]))
				return (0);
		if (i >= 12 && i <= 15)
			if (!check_row_right(board, i - 12, in_num[i]))
				return (0);
		i++;
	}
	return (1);
}

int	saferow(int board[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	safecol(int board[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	checksafe(int board[4][4], int r, int c, int num)
{
	if ((saferow(board, r, num))
		&& (safecol(board, c, num) && (board[r][c] == 0)))
		return (1);
	return (0);
}



int	recursionfilling(int board[4][4], int *input)
{
	int	row;
	int	col;
	int	n;

	n = 1;
	if ((lookfor0(board, &row, &col) == 0) && (checkboard(board, input) == 1))
		return (1);
	while (n <= 4)
	{
		if (checksafe(board, row, col, n))
		{
			board[row][col] = n;
			if (recursionfilling(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_board(int board[4][4])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(board[row][col] + '0');
			ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
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

int	main(int argc, char **argv)
{
	char	raw[] = "3 2 3 1 2 3 1 2 3 2 1 2 1 2 3 2";
	int	input[16];


	// if (argc == 2)
	// {
		if (checkinput(raw, input) == 16)
			initboard(input);
		else
			write(1, "\nERROR\n\n", 8);
	// }
	// else
	// 	write(1, "\nNot a valid argument\n\n", 23);
	// return (0);

	// if (argc == 2)
	// {
	// 	if (checkinput(argv[1], input) == 16)
	// 		initboard(input);
	// 	else
	// 		write(1, "\nERROR\n\n", 8);
	// }
	// else
	// 	write(1, "\nNot a valid argument\n\n", 23);
	// return (0);
}
