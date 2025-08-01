# file: Makefile

CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC_DIR = src
OBJ_DIR = obj
INCLUDE_DIR = src/include
TARGET = zulu

# Source files
SOURCES = $(SRC_DIR)/main.c $(SRC_DIR)/data.c

# Object files will be stored in the obj directory
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))

# Phony targets don't correspond to a file, so they are always executed.
# We've added 'install' and 'uninstall' to the list.
.PHONY: all clean install uninstall

all: $(TARGET)

# Create the object directory if it doesn't exist
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Link the object files to create the final executable
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

# Compile each C file into an object file
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Install the executable to /usr/local/bin
# The `install` command is used for this purpose, with -m 755 for permissions.
install: $(TARGET)
	@echo "Installing $(TARGET) to /usr/local/bin"
	@sudo install -m 755 $(TARGET) /usr/local/bin/

# Remove the installed executable from /usr/local/bin
uninstall:
	@echo "Uninstalling $(TARGET) from /usr/local/bin"
	@sudo rm -f /usr/local/bin/$(TARGET)

# Clean up generated files
clean:
	@echo "Cleaning project..."
	@rm -rf $(OBJ_DIR) $(TARGET)

