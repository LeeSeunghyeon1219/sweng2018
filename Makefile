CFLAGS = -Wall
OBJS = func1.o myapp.o
TARGET = myapp

$(TARGET): $(OBJS)
	gcc -o $(TARGET) $(OBJS)

%.o : %.c
	gcc -c $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)
