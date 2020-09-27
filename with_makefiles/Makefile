#install:
#	MAKEARGS=install
#uninstall:
#	MAKEARGS=uninstall
MYDIR = .

install: $(MYDIR)/*/
	for dir in $^ ; do \
		make -C $${dir} install; \
	done

uninstall: $(MYDIR)/*/
	for dir in $^ ; do \
		make -C $${dir} uninstall; \
	done

clean: $(MYDIR)/*/
	for dir in $^ ; do \
		make -C $${dir} clean; \
	done

all: $(MYDIR)/*/
	for dir in $^ ; do \
		make -C $${dir}; \
	done

.PHONY:clean install uninstall
