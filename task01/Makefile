obj-m += hello.o

ifndef KERNDIR
KERNDIR=/lib/modules/$(shell uname -r)/build
endif

all:
	make -C $(KERNDIR) M=$(PWD) modules

clean:
	make -C $(KERNDIR) M=$(PWD) clean
