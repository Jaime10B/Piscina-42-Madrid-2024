#include <unistd.h>
#include <stdlib.h>

char int_to_char(int num) {
    return '0' + num;
}

void print_line(int *line, int size) {
    int j = 0;
    while (j < size) {
        char c = int_to_char(line[j]);
        write(1, &c, 1);
        if (j < size - 1)
            write(1, " ", 1);
        j++;
    }
    write(1, "\n", 1);
}

void print_board(int **board, int size) {
    int i = 0;
    while (i < size) {
        print_line(board[i], size);
        i++;
    }
}

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr(char *str) {
    int i = 0;
    while (str[i]) {
        ft_putchar(str[i]);
        i++;
    }
}

char **allocate_arrays() {
    char **array = malloc(4 * sizeof(char *));
    if (!array) return NULL;

    int i = 0;
    while (i < 4) {
        array[i] = malloc(5 * sizeof(char));
        if (!array[i]) return NULL;
        i++;
    }
    return array;
}

void fill_arrays(char **array, char *input) {
    int counter = 0, subcounter = 0, i = 0;
    while (input[i]) {
        if (input[i] != ' ') {
            if (counter < 4) array[0][subcounter] = input[i];
            else if (counter < 8) array[1][subcounter] = input[i];
            else if (counter < 12) array[2][subcounter] = input[i];
            else array[3][subcounter] = input[i];
            counter++;
            subcounter = (subcounter + 1) % 4;
        }
        i++;
    }
    int j = 0;
    while (j < 4) {
        array[j][4] = '\0';
        j++;
    }
}

char **asign_values(char *input) {
    char **array = allocate_arrays();
    if (!array) return NULL;
    fill_arrays(array, input);
    return array;
}

void set_board_value(int **board, int pos, int index, int identifier) {
    if (identifier == 0) board[0][index] = pos;
    else if (identifier == 1) board[3][index] = pos;
    else if (identifier == 2) board[index][0] = pos;
    else if (identifier == 3) board[index][3] = pos;
}

int **index_is_one(char *row_or_column, int **board, int identifier) {
    int counter = 0;
    while (row_or_column[counter]) {
        if (row_or_column[counter] == '1') set_board_value(board, 4, counter, identifier);
        counter++;
    }
    return board;
}

int **index_is_four(char *row_or_column, int **board, int identifier) {
    int counter = 0;
    while (row_or_column[counter]) {
        if (row_or_column[counter] == '4')
		{
			if (identifier == 0 || identifier == 3)
			{
				
			}
			else if (identifier == 2)
			{
				set_board_value(board, 1, 0, identifier);
				set_board_value(board, 2, 1, identifier);
				set_board_value(board, 3, 2, identifier);
				set_board_value(board, 4, 3, identifier);
			}
		}
        counter++;
    }
    return board;
}

int **initialize_board(int size) {
    int **board = malloc(size * sizeof(int *));
    int i = 0;
    while (i < size) {
        board[i] = malloc(size * sizeof(int));
        int j = 0;
        while (j < size) {
            board[i][j] = 0;
            j++;
        }
        i++;
    }
    return board;
}

void free_board(int **board, int size) {
    int i = 0;
    while (i < size) {
        free(board[i]);
        i++;
    }
    free(board);
}

void free_input_array(char **array) {
    int i = 0;
    while (i < 4) {
        free(array[i]);
        i++;
    }
    free(array);
}

void fill_row_or_column(int **board, int identifier, int index) {
    int value = 1;
    if (identifier == 0) { // Upper row
        int j = 0;
        while (j < 4) {
            if (board[index][j] == 0) {
                board[index][j] = value;
                value++;
            }
            j++;
        }
    } else if (identifier == 1) { // Lower row
        int j = 0;
        while (j < 4) {
            if (board[index][j] == 0) {
                board[index][j] = value;
                value++;
            }
            j++;
        }
    } else if (identifier == 2) { // Left column
        int i = 0;
        while (i < 4) {
            if (board[i][index] == 0) {
                board[i][index] = value;
                value++;
            }
            i++;
        }
    } else if (identifier == 3) { // Right column
        int i = 0;
        while (i < 4) {
            if (board[i][index] == 0) {
                board[i][index] = value;
                value++;
            }
            i++;
        }
    }
}

void fill_all(int **board, char **input_number_sorted) {
    int i = 0;
    while (i < 4) {
        if (input_number_sorted[0][i] == '4')
            fill_row_or_column(board, 0, i);
        if (input_number_sorted[1][i] == '4')
            fill_row_or_column(board, 1, i);
        if (input_number_sorted[2][i] == '4')
            fill_row_or_column(board, 2, i);
        if (input_number_sorted[3][i] == '4')
            fill_row_or_column(board, 3, i);
        i++;
    }
}

int main(int argc, char **argv) {
    if (argc != 2) {
        write(2, "Usage: ./rush-01 \"col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right\"\n", 160);
        return 1;
    }

    int size = 4;
    int **board = initialize_board(size);
    char **input_number_sorted = asign_values(argv[1]);
    if (!input_number_sorted) {
        write(2, "Memory allocation error\n", 24);
        free_board(board, size);
        return 1;
    }

    board = index_is_one(input_number_sorted[0], board, 0);
    board = index_is_one(input_number_sorted[1], board, 1);
    board = index_is_one(input_number_sorted[2], board, 2);
    board = index_is_one(input_number_sorted[3], board, 3);


    fill_all(board, input_number_sorted);

	board = index_is_four(input_number_sorted[0], board, 0);
	board = index_is_four(input_number_sorted[3], board, 2);

    print_board(board, size);
    free_board(board, size);
    free_input_array(input_number_sorted);
    return 0;
}