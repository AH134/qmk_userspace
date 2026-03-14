#!/bin/bash

# easily compile and open explorer to the compiled firmware
qmk userspace-compile
explorer.exe .
echo "Compiled firmware"