CPPFLAGS += -I /usr/include/python3.7m
LIBS=-lpython3.7m

COMPOSANT = component_Hachage

LIBSO = ${COMPOSANT}.so
LIBSO_OBJS = ${COMPOSANT}.o sha256/sha256/sha256.o

include ../gcc.mk
include ../pybind11.mk


all: $(LIBSO)
clean:
	rm -f ${LIBSO}  ${LIBSO_OBJS}


${DESTINATION_LIBSO}: ${LIBSO}
	cp $< $@