all: list test 
	@clang test.o linked_list.o -o list.exe 
	@echo list.exe created

list:linked_list.c
	@echo Compiling linked_list.c
	@clang -c linked_list.c -Wno-incompatible-pointer-types
	@echo Compilation success linked_list.c
test :test.c 
	@echo Compiling test.c
	@clang -c test.c -Wno-incompatible-pointer-types
	@echo Compilation success test.c