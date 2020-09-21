# Version 1:
# pointer3: pointer3.c
# 	gcc -o pointer3 pointer3.c

# Version 2:
# pointer3: pointer3.c
# 	gcc -o $@ $<

# Version 3:
# all: pointer pointer2 pointer3
# %: %.c
# 	gcc -o $@ $^

# Version 4:
OUTPUT = pointer pointer2 pointer3
CFLAGS = -g -Wall -fsanitize=address -o

all: $(OUTPUT)

clean:
	rm -f *.o $(OUTPUT)

%: %.c
	gcc $(CFLAGS) $@ $^