.table
	int a_1
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
	mov a_1, $1
	mov a_1, 4
	print a_1
	println a_1
	jump end_if_else_0
end_if_0:
	add $2, 1, 1
	add $3, $2, 1
	mov a_1, $3
	mov a_1, 2
	println a_1
end_if_else_0:
	println a_1
	jump END


END: nop
