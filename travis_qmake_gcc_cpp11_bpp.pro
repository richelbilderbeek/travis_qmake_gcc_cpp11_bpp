SOURCES += main.cpp

QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror

# Bio++
INCLUDEPATH += /usr/include/
LIBS += -lbpp-core -lbpp-seq -lbpp-phyl -lbpp-popgen -lbpp-qt -lbpp-raa
