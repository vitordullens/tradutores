.table
	int x_0
	char string_0 [] = "TESTE2" 
	char string_1 = 'n' 
	float y_1
	char string_2 [] = "Digite um numero do tipo float: " 
	char string_3 [] = "Seu numero multiplicado por 2 e somado 2 eh igual a " 
	int x_2
	float z_1
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
	scanf y_1
	mov $1021, &string_3
	param 52
	param $1021
	call write, 2
	inttofl $0, 2
	mul $1, y_1, $0
	inttofl $2, 2
	add $3, $1, $2
	println $3
	mov x_0, 1
	inttofl $4, 1
	add $5, 1.2, $4
	minus $6, $5
	inttofl $7, 5
	mul $8, $6, $7
	inttofl $9, 2
	add $10, 7.2, $9
	add $11, $8, $10
	inttofl $12, 2
	add $13, $11, $12
	fltoint $14, $13
	mov x_0, $14
	brz end_if_0, x_0
	mov x_2, 1
	or $15, x_2, x_2
	or $16, y_1, y_1
	inttofl $17, $15
	or $18, $17, $16
	mov y_1, $18
end_if_0:
	println y_1
	mov x_0, 2
	mov z_1, 2.2
	inttofl $19, x_0
	seq $20, z_1, $19
	not $20, $20
	fltoint $21, $20
	mov x_0, $21
	println x_0
	jump END


END: nop
