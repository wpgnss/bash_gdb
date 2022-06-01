#!/bin/bash

SIZE=$1
DATE=$(date +%Y-%m-%d_%H-%M-%S)

dd if=/dev/zero of=./$DATE.$SIZE bs=1 count=0 seek=$SIZE
