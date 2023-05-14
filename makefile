libs=-lglfw
objs=main.o
exe=tompaine

all:	${objs}
	g++ ${objs} -o ${exe} ${libs}
	rm *.o
	./${exe}

main.o:	src/main.cpp
	g++ -c src/main.cpp -o main.o ${libs}
