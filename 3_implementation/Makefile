PROJ_NAME = calc

# Include additional C function files
COMM_SRC = src/is_prime.c \

# Include additional C test files
COMM_TST = test/test_is_prime.c \

# Application Variables
SRC = $(COMM_SRC) \
		main.c \

INC = -Iinc \

LIB = -lm \

OUT = $(BUILD)/$(PROJ_NAME).out

# Test Variables
TST_SRC = $(COMM_SRC) \
			unity/unity.c \
			test/test_main.c \
			$(COMM_TST) \

TST_INC = $(INC) \
		-Iunity \
		-Itest \

TST_LIB = $(LIB) \

TST_OUT = $(BUILD)/test_$(PROJ_NAME).out

# Output directory
BUILD = build

.PHONY: all test doc clean

$(OUT): $(SRC) $(BUILD)
	gcc -g $(SRC) $(INC) $(LIB) -o $@

$(TST_OUT): $(TST_SRC) $(BUILD)
	gcc -g $(TST_SRC) $(TST_INC) $(TST_LIB) -o $@

all: $(OUT)

run: $(OUT)
	./$(OUT)

test: $(TST_OUT)
	./$(TST_OUT)

$(BUILD):
	mkdir $(BUILD)

doc:
	make -C documentation

clean:
	rm -rf $(BUILD) documentation/html
