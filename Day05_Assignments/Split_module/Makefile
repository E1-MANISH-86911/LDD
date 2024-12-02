obj-m := SimpleModule.o
SimpleModule-objs = File1.o File2.o

SimpleModule.ko: File1.c File2.c
	make -C /lib/modules/$$(uname -r)/build M=$$(pwd) modules
clean:
	make -C /lib/modules/$$(uname -r)/build M=$$(pwd) clean
	
.PHONY: clean






