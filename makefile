COMPILER = g++
MAIN_FILE = main.cpp
OUTPUT_OPTION = -o
OUTPUT_FILE_NAME = main_out.out
#----------------------------------------------------------------#
# make run -> para compilar e rodar o arquivo					 #
# make cls -> para apagar o arquivo de saida e limpar o terminal #
#----------------------------------------------------------------#
run:
	@$(COMPILER) $(MAIN_FILE) $(OUTPUT_OPTION) $(OUTPUT_FILE_NAME)
	@./$(OUTPUT_FILE_NAME)
cls:
	@rm $(OUTPUT_FILE_NAME)
	@clear