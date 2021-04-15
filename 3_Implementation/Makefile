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

TEST_SRC = test/test.c \
unity/unity.c 
INC_H = inc
INC_T = unity

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

test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(TEST_PROJ_NAME).$(EXEC)

cppcheck:
	cppcheck --enable=all $(SRC)

valgrind:
	valgrind ./$(PROJ_NAME).$(EXEC)

debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

clean:
	del *.DAT
	del *.$(EXEC)

