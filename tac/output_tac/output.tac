.table
	int x_0
	char string_0 [] = "TESTE2" 
	float y_3
	float z_3
.code
c:
	mov x_0, 2
	return 0
b:
	mov x_0, 1
	return 0
main:
	println string_0
	mov x_0, 1
	not $0, x_0
	inttofl $1, $0
	mov y_3, $1
	println y_3
	inttofl $2, 1
	add $3, 1.2, $2
	minus $4, $3
	inttofl $5, 5
	mul $6, $4, $5
	inttofl $7, 2
	add $8, 7.2, $7
	add $9, $6, $8
	inttofl $10, 2
	add $11, $9, $10
	fltoint $12, $11
	mov x_0, $12
	println x_0
	or $13, x_0, x_0
	or $14, y_3, y_3
	inttofl $15, $13
	or $16, $15, $14
	mov y_3, $16
	println y_3
	mov x_0, 2
	mov z_3, 2.2
	inttofl $17, x_0
	slt $18, $17, z_3
	fltoint $19, $18
	mov x_0, $19
	println x_0
