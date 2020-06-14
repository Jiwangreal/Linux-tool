CC=gcc
BIN=test1
OBJS=test1.o
.PHONY:all clean print
all:print $(BIN)   ##进入该目录执行的是make all，print是伪目标，只会执行动作，不会生成print文件
print:		
	@echo "----make all in $(PWD) ----"
$(BIN):$(OBJS)
	$(CC) $(OBJS) -o $@
%.o:%.c
	$(CC) -c $<
clean:
	@echo "---- make clean in $(PWD) ----"
	rm -f $(BIN) $(OBJS)