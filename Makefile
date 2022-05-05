CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I src -MMD
DIR_GUARD = @mkdir -p $(@D)


all: bin/geom

-include obj/*.d

bin/geom: obj/triangle.o obj/circle.o obj/main.o obj/lib.a
	$(DIR_GUARD)
	gcc $(CFLAGS) $(CPPFLAGS) -o $@ $^ -lm

obj/main.o: src/geometry/main.c
	$(DIR_GUARD)
	gcc $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	
obj/triangle.o: src/libgeometry/triangle.c
	gcc $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	
obj/circle.o: src/libgeometry/circle.c
	gcc $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	
obj/lib.a: obj/circle.o obj/triangle.o 
	ar rcs $@ $^

clean:
	rm bin/* obj/*
