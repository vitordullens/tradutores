
const char* PRINTAR = 
"write:\n"
"\tmov $1023, 0\n"
"dentroWriteLoop:\n"
"\tmov $1022, #1\n"
"\tmov $1022, $1022[$1023]\n"
"\tadd $1023, $1023, 1\n"
"\tprint $1022\n"
"\tsub $1022, $1023, #0\n"
"\tbrnz dentroWriteLoop, $1022\n"
"\treturn\n"
"writeln:\n"
"\tcall write, 2\n"
"\tprintln\n"
"\treturn\n"
;