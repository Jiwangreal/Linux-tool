SUBDIRS=teset1 teset2
.PHONY:default all clean $(SUBDIRS)	##定义了5个伪目标
default:all		##终极目标，default没有命令，会去生成all
all clean:
	$(MAKE) $(SUBDIRS) TARGET=$@		## $(MAKE)就是make，TARGET就是all(执行make all)，执行
										##make clean，此时TARGET就是clean。所以clean也会传递到子目录的目标中
$(SUBDIRS):		##SUBDIRS就是test1，test2，会进入这俩子目录去调用子目录的makefile，并将all传递进去
	$(MAKE) -C $@ $(TARGET)

##make -C test1 all，等价于make all test1/makefile，-C表示进入到test1目录