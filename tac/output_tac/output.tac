.table
	int x_0
	char string_0 [] = "TESTE2" 
	float y_2
.code
b:
	mov x_0, 1
return 0
main:
	println string_0
	inttofl $0, 1
	add $1, 1.2, $0
	inttofl $2, 5
	mul $3, $1, $2
	inttofl $4, 2
	add $5, 7.2, $4
	add $6, $3, $5
	inttofl $7, 1
	add $8, $6, $7
	fltoint $9, $8
	mov x_0, $9
	println x_0
	or $10, x_0, x_0
	or $11, y_2, y_2
	or $12, $10, $11
	inttofl $13, $12
	mov y_2, $13
