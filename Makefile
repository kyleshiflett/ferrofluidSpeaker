# Variables to control Makefile operation

CXX = g++
CFLAGS = -Wall -g
LIBS = -lstdc++
SRCDIR=Source
OBJDIR=Objects
BUILD_OUT=Out
SRCS=$(shell find $(SRCDIR) -name '*.cpp')
OBJS=$(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))
# ****************************************************

# Targets needed to bring the executable up to date

# ferrofluid.exe: main.o
# 	$(CXX) $(CFLAGS) -o $(BUILD_OUT)ferrofluid.exe $(BUILD)*.o

ferrofluid.exe: $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) $(LIBS) -o $(BUILD_OUT)/$@


# The main.o target can be written more simply
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

# Clean the project
clean:
	rm $(BUILD_OUT)/*.exe
	rm $(OBJDIR)/*.o