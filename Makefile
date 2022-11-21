CC:=g++
SRCDIR:=src
BUILDDIR:=build
TARGET:=main.out
CFLAGS:=-g -Wall -O3 -std=c++11 -I include/

all: main

mage:
	$(CC) $(CFLAGS) -c src/mage.cpp -o build/mage.o

warrior:
	$(CC) $(CFLAGS) -c src/warrior.cpp -o build/warrior.o

playableCharacter:
	$(CC) $(CFLAGS) -c src/playableCharacter.cpp -o build/playableCharacter.o

main: mage warrior playableCharacter
	$(CC) $(CFLAGS) build/mage.o build/playableCharacter.o build/warrior.o src/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)