.table
	int x_0
	int y_1
	int x_2
.code
	or $0, x_0, x_0
	mov x_0, $0
	or $1, x_2, x_2
	or $2, y_1, y_1
	or $3, $1, $2
	mov y_1, $3
	or $4, x_0, x_0
	mov x_0, $4
