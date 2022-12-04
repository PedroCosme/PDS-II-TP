CC:=g++
SRCDIR:=src
BUILDDIR:=build
TARGET:=main.out
CFLAGS:=-g -Wall -O3 -std=c++17 -I include/

all: main

gameEvents:
	$(CC) $(CFLAGS) -c src/gameEvents.cpp -o build/gameEvents.o

playableCharacter:
	$(CC) $(CFLAGS) -c src/playableCharacter.cpp -o build/playableCharacter.o

monster:
	$(CC) $(CFLAGS) -c src/monster.cpp -o build/monster.o

weapon:
	$(CC) $(CFLAGS) -c src/weapon.cpp -o build/weapon.o

enemy:
	$(CC) $(CFLAGS) -c src/enemy.cpp -o build/enemy.o

utilities:
	$(CC) $(CFLAGS) -c src/utilities.cpp -o build/utilities.o

shop:
	$(CC) $(CFLAGS) -c src/shop.cpp -o build/shop.o

item:
	$(CC) $(CFLAGS) -c src/item.cpp -o build/item.o

inventory:
	$(CC) $(CFLAGS) -c src/inventory.cpp -o build/inventory.o

vampire:
	$(CC) $(CFLAGS) -c src/vampire.cpp -o build/vampire.o


main: weapon playableCharacter monster gameEvents enemy utilities shop item inventory vampire
	$(CC) $(CFLAGS) build/playableCharacter.o build/monster.o build/weapon.o build/item.o build/gameEvents.o build/vampire.o build/enemy.o build/inventory.o build/shop.o build/utilities.o src/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)