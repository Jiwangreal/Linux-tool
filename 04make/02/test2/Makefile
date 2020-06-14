CXX=gcc
BIN=test2
OBJS=test2.o
CFLAGS=-Wall -g
.PHONY:all clean print
all:print $(BIN)   ##进入该目录执行的是make all，print是伪目标，只会执行动作，不会生成print文件
print:		
	@echo "----make all in $(PWD) ----"
$(BIN):$(OBJS)
	$(CXX) $(OBJS) -o $@
%.o:%.cpp
	$(CXX) -c $<
clean:
	@echo "---- make clean in $(PWD) ----"
	rm -f $(BIN) $(OBJS)