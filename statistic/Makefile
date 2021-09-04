CC=gcc
# Just what I regularily use, YMMV, of course
CFLAGS += -O3 -g3  -W -Wall -Wextra -Wuninitialized -Wstrict-aliasing -std=c11
# Libmath
LIBS += -lm
# the build target executable:
TARGET = statistic

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(LIBS)

clean:
	$(RM) $(TARGET)
