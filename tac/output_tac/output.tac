.table
	int a_1
	char string_0 [] = "if" 
	char string_1 [] = "else if" 
	char string_2 [] = "else" 
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
	mov a_1, 1
	seq $0, a_1, 1
	brz end_if_0, $0
	add $1, 1, 2
	mul $2, $1, 7
	mov a_1, $2
	println a_1
	mov a_1, 7
	jump end_if_else_0
end_if_0:
	or $3, 2, 3
	mov a_1, $3
	println a_1
	slt $4, 2, a_1
	mov a_1, $4
end_if_else_0:
	seq $5, a_1, 0
	brz end_if_2, $5
	mov $1021, &string_0
	param 2
	param $1021
	call writeln, 2
	jump end_if_else_2
end_if_2:
	seq $6, a_1, 0
	not $6, $6
	brz end_if_1, $6
	mov $1021, &string_1
	param 7
	param $1021
	call writeln, 2
	jump end_if_else_1
end_if_1:
	mov $1021, &string_2
	param 4
	param $1021
	call writeln, 2
end_if_else_1:
end_if_else_2:
	println a_1
	jump END


END: nop
