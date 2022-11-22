CC:=g++
SRCDIR:=src
BUILDDIR:=build
TARGET:=main.out
CFLAGS:=-g -Wall -O3 -std=c++11 -I include/

all: main

playableCharacter:
	$(CC) $(CFLAGS) -c src/playableCharacter.cpp -o build/playableCharacter.o

monster:
	$(CC) $(CFLAGS) -c src/monster.cpp -o build/monster.o

equipment:
	$(CC) $(CFLAGS) -c src/equipment.cpp -o build/equipment.o

weapon:
	$(CC) $(CFLAGS) -c src/weapon.cpp -o build/weapon.o

main: weapon  playableCharacter monster equipment
	$(CC) $(CFLAGS) build/playableCharacter.o build/monster.o build/weapon.o build/equipment.o  src/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)