all: delete_file
	@echo "Generate file..."
	gcc file_generate.c -o a.out
	./a.out
	$(RM) a.out
	@echo "Done!"

read:
	@echo "Reading file..."
	gcc file_read.c -o a.out
	./a.out
	$(RM) a.out
	@echo "Done!"

delete_file: 
	${RM} out_file.txt