obj-m := hello.o args.o
args-objs := helloworld_with_arguments.o

all:
	make -C /lib/modules/`uname -r`/build M=${PWD} modules
clean:
	make -C /lib/modules/`uname -r`/build M=${PWD} clean