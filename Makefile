CC:=g++
SRCDIR:=src
BUILDDIR:=build
TARGET:=main.out
CFLAGS:=-g -Wall -O3 -std=c++11 -I include/

all: main

playableCharacter:
	$(CC) $(CFLAGS) -c src/playableCharacter.cpp -o build/playableCharacter.o

weapon:
	$(CC) $(CFLAGS) -c src/weapon.cpp -o build/weapon.o

great_sword:
	$(CC) $(CFLAGS) -c src/great_sword.cpp -o build/great_sword.o

main: weapon great_sword playableCharacter
	$(CC) $(CFLAGS) build/playableCharacter.o build/weapon.o build/great_sword.o src/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)