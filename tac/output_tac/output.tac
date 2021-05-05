.table
	int x_0
	char string_0 [] = "TESTE2" 
	float y_1
.code
	println string_0
	inttofl $0, 1
	add $1, 1.2, $0
	inttofl $2, 5
	mul $3, $1, $2
	inttofl $4, 2
	add $5, 7.2, $4
	add $6, $3, $5
	fltoint $7, $6
	mov x_0, $7
	println x_0
	or $8, x_0, x_0
	or $9, y_1, y_1
	or $10, $8, $9
	inttofl $11, $10
	mov y_1, $11
