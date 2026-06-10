all: run

SRC_DIR := src
BIN_DIR := out
MAIN_CLASS := App

build: $(BIN_DIR)/$(MAIN_CLASS).class

$(BIN_DIR)/%.class: $(SRC_DIR)/%.java
	mkdir -p $(BIN_DIR)
	javac -d $(BIN_DIR) $<

run: build
	java -cp $(BIN_DIR) $(MAIN_CLASS)

clean:
	rm -rf $(BIN_DIR)