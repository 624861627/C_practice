CC:=g++
srcscpp:=$(wildcard *.cpp)                                                               
objscpp:=$(patsubst %.cpp,%,$(srcscpp))
C:=gcc
srcsc:=$(wildcard *.c)                                                               
objsc:=$(patsubst %.c,%,$(srcsc))

#匹配模板,替换后的内容,查找的来源
#LINKERFLAG:=-lpthread
all:$(objsc)
all:$(objscpp)
%:%.cpp
	$(CC) -o $@ $< -lpthread
%:%.c
	$(C) -o $@ $< -lpthread
.PHONY:clean rebuild print
rebuild:clean all
cleancpp:
	rm -rf $(out) $(objscpp)
cleanc:
	rm -rf $(out) $(objsc)
printcpp:
	@echo $(objscpp)
printc:
	@echo $(objsc)
