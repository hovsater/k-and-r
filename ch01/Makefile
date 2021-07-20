CC = clang
CFLAGS = -std=c89 -Wall -Wextra -Werror -Wshadow

EXAMPLES := $(patsubst examples/%.c,examples/bin/%,$(wildcard examples/*.c))
EXERCISES := $(patsubst exercises/%.c,exercises/bin/%,$(wildcard exercises/*.c))

all: examples exercises

examples : $(EXAMPLES)

examples/bin/% : examples/%.c
	$(CC) $(CFLAGS) $^ -o $@

exercises : $(EXERCISES)

exercises/bin/% : exercises/%.c
	$(CC) $(CFLAGS) $^ -o $@

.PHONY : clean
clean :
	-rm $(EXAMPLES) $(EXERCISES)
