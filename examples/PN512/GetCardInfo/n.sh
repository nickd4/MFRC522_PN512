#!/bin/sh
(cd ../../../src; ./n.sh)
g++ -g -I../../../src -I. -c GetCardInfo.cpp
g++ -g -o GetCardInfo ../../../src/Arduino.o ../../../src/MFRC522.o ../../../src/PN512.o ../../../src/SPI.o GetCardInfo.o
