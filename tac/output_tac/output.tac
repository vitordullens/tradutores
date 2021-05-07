.table
	int x_0
	char string_0 [] = "TESTE2" 
	char string_1 = 'n' 
	float y_1
	float k_1
	char string_2 [] = "Digite um numero do tipo float: " 
	char string_3 [] = "Seu numero multiplicado por 2 e somado 2 eh igual a " 
	int j_1
	int x_2
	float z_1
	int a_1
	char string_4 = '\n' 
	char string_5 = '-' 
.code
///////// funcoes predefinidas

write:
	mov $1023, 0
dentroWriteLoop:
	mov $1022, #1
	mov $1022, $1022[$1023]
	add $1023, $1023, 1
	print $1022
	sub $1022, $1023, #0
	brnz dentroWriteLoop, $1022
	return
writeln:
	call write, 2
	println
	return

/////////
main:
	mov $1021, &string_0
	param 6
	param $1021
	call writeln, 2
	println string_1
	mov $1021, &string_2
	param 32
	param $1021
	call write, 2
	scanf k_1
	mov $1021, &string_3
	param 52
	param $1021
	call write, 2
	inttofl $0, 2
	mul $1, k_1, $0
	inttofl $2, 2
	add $3, $1, $2
	println $3
	fltoint $4, k_1
	mov j_1, $4
	mov x_0, 1
	inttofl $5, 1
	add $6, 1.2, $5
	minus $7, $6
	inttofl $8, 5
	mul $9, $7, $8
	inttofl $10, 2
	add $11, 7.2, $10
	add $12, $9, $11
	inttofl $13, 2
	add $14, $12, $13
	fltoint $15, $14
	mov x_0, $15
	brz end_if_0, x_0
	mov x_2, 1
	or $16, x_2, x_2
	or $17, y_1, y_1
	inttofl $18, $16
	or $19, $18, $17
	mov y_1, $19
end_if_0:
	println y_1
	mov x_0, 2
	mov z_1, 2.2
	inttofl $20, x_0
	seq $21, z_1, $20
	not $21, $21
	fltoint $22, $21
	mov x_0, $22
	println x_0
	mov a_1, 0
for_0:
	slt $23, a_1, j_1
	brz end_for_0, $23
	add $24, a_1, 1
	mov a_1, $24
	print a_1
	sub $25, j_1, 1
	seq $26, a_1, $25
	brz end_if_1, $26
	print string_4
	jump end_if_else_1
end_if_1:
	print string_5
	jump for_0
end_if_else_1:
end_for_0:
	jump END


END: nop
