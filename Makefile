compiler := g++
encode := -finput-charset=UTF-8 -fexec-charset=UTF-8

main_file := main.cpp
result_file := screp.exe
all:
	$(compiler) $(main_file) $(encode) -o $(result_file)
clear:
	del $(result_file)
