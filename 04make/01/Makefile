CC= gcc
CFLAGS=-Wall -g
BIN=main
SUBDIR=$(shell ls -d */)		##SUBDIR保存子文件夹列表
ROOTSRC=$(whildcard *.c)		##当前文件夹下的.c，当前是main.c
ROOTOBJ=$(ROOTSRC:%.c=%.o)
SUBSRC=$(shell find $(SUBDIR) -name '*.c')		##实际上是：find bll dal ui -name '*.c'		
SUBOBJ=$(SUBSRC:%.c=%.o)						##子文件下所有的.c文件保存在SUBSRC
$(BIN):$(ROOTOBJ) $(SUBOBJ)
	$(CC) $(CFLAGS) -o $(BIN) $(ROOTOBJ) $(SUBOBJ)
.c.o:			##所有的.c生成，或者%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(BIN) $(ROOTOBJ) $(SUBOBJ)
