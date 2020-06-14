.PHONY:clean all
CC=gcc
CGLAGS=-Wall -g
BIN=simple main			##终极目标是BIN,simple这里是隐含规则，先生成simple.o，再生成simple可执行程序
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
main:main.o search.o		##因为main依赖两个文件，所有不能使用隐含规则，不能自动推导
	$(CC) $(CFLAGS) $^ -o $@
clean:
	rm -f *.o $(BIN)