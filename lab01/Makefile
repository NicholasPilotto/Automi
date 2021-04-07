CXX=g++
CXXFLAGS=
LDFLAGS=
DEPS=automata.h
OBJS=main.o automata.o

all: main

main: $(OBJS) $(DEPS)
	$(CXX) -o main $(OBJS) $(LDFLAGS)

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<
	
clean:
	rm -f $(OBJS) main
