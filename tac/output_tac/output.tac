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
	brz end_if_0, a_1
	mov a_1, 1
	jump end_if_else_0
end_if_0:
end_if_else_0:


END: nop
