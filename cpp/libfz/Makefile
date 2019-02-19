# Compiler & Flags
CXX         = g++

STANDARD    = -std=c++11
MFLAGS      =

COMPILE_CXX = $(CXX) $(MFLAGS) $(STANDARD)

LFLAGS      = -lz

# Source files
SOURCES_CPP = $(wildcard src/*.cpp)
SOURCES_C   = $(wildcard src/*.c)
SOURCES     = $(SOURCES_CPP) $(SOURCES_C)
HEADERS     = $(wildcard src/*.h)

libfzip.dll: $(SOURCES) $(HEADERS)
	$(COMPILE_CXX) -shared -o $@ $^ $(LFLAGS) -Wl,--out-implib,libfzip.a
