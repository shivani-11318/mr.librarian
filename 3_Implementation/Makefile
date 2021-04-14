PROJ_NAME = lib_manager
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC =src/Addbook.c \
src/Addmember.c \
src/Author.c \
src/bookret.c \
src/Displaybook.c \
src/exit.c \
src/Issue.c\
src/Searchbook.c\
src/Stock.c\
src/Titlelist.c

 
INC_H = inc


ifdef OS
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
	  EXEC = out
   endif
endif

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(PROJ_NAME).$(EXEC)
	

run:
	$(PROJ_NAME).$(EXEC)


