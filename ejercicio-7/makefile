ARCHIVOS=main.cpp Punto.cpp
#OBJETOS=$(ARCHIVOS:.cpp=.o)
PROG=main

all: $(PROG)

$(PROG) : $(ARCHIVOS)
	g++ $(OBJETOS) -o $@ $^
	@- echo "Fin compilacion makefile"

%.o: %.cpp
	g++ -c $< -o $@

clean:
	rm -f *.o $(PROG)