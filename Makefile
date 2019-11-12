CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_LIB = basicMath.o power.o
FLAGS = -Wall -g

# $@ - the file on the left side of the :
# $< - the first name in the dependencies list
# $^ - the right side of :

all: myMaths myMathd mains maind
myMaths: libmyMath.a
myMathd: libmyMath.so
libmyMath.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $^ 
libmyMath.so: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $^
mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains $^ -lm -I.
maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so -lm -I.
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c -o $@ $< -lm -I.
basicMath.o: basicMath.c
	$(CC) $(FLAGS) -c -o $@ $< -I.
power.o: power.c
	$(CC) $(FLAGS) -fPIC -c -o $@ $< -I.
	
.PHONY: clean all
	
clean:
	rm -f *.o *.a *.so mains maind

