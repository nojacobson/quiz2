CC=g++
CFLAGS=-g -Wall
RFLAGS=-rf
DEL=*.o archive.tar.gz course.h.gch node.h.gch html latex dox.conf

all: build doczip

build: collegemain.o course.o college.o
	$(CC) $(CFLAGS) collegemain.o course.o college.o -o build

collegemain.o: collegemain.cc college.h course.h node.h
	$(CC) $(CFLAGS) -c collegemain.cc course.h node.h

course.o: course.cc course.h
	$(CC) $(CFLAGS) -c course.cc course.h

college.o: college.cc college.h course.h node.h
	$(CC) $(CFLAGS) -c college.cc course.h course.h node.h

clean:
	-rm $(RFLAGS) $(DEL)

doc:
	doxygen -g dox.conf
	doxygen dox.conf

myexe: 
	./build

doczip:
	tar cvzf archive.tar.gz *.cc *.h Makefile