RM ?= rm -f
CC ?= /usr/bin/gcc
CFLAGS ?= -Wall
PROJECT_BIN_DIR ?= ./bin
SRC_DIR ?= ./src
LIB_DIR ?= $(SRC_DIR)/lib
USECASES_DIR ?= $(SRC_DIR)/use_cases
SRC_FILES ?= $(wildcard $(SRC_DIR)/*.c)
LIB_FILES ?= $(wildcard $(LIB_DIR)/*.c)
USECASES_FILES ?= $(wildcard $(USECASES_DIR)/*.c)

all:
	$(CC) $(CFLAGS) $(LIB_FILES) $(USECASES_FILES) $(SRC_FILES) -o $(PROJECT_BIN_DIR)/timeclock

clean:
	$(RM) $(PROJECT_BIN_DIR)/*
