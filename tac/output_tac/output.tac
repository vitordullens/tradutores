.table
	int x_0
	char string_0 [] = "TESTE2" 
	char string_1 = 'n' 
	float y_1
	int a_1
	char string_2 = '\n' 
	char string_3 = '-' 
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
	mov a_1, 0
for_0:
	slt $0, a_1, 5
	brz end_for_0, $0
	add $1, a_1, 1
	mov a_1, $1
	print a_1
	seq $2, a_1, 4
	brz end_if_0, $2
	print string_2
	jump end_if_else_0
end_if_0:
	print string_3
	jump for_0
end_if_else_0:
end_for_0:
	jump END


END: nop
