CC     := g++
OBJECT := app

$(OBJECT): src/*.cc
	$(CC) -g -o $(OBJECT) src/*.cc -std=c++17

.PHONY: all clean
all: $(OBJECT)
clean:
	@rm -f $(OBJECT)
