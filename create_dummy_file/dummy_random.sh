#!/bin/bash

SIZE=$1
DATE=$(date +%Y-%m-%d_%H-%M-%S)

head -c $SIZE < /dev/urandom > ./$DATE.$SIZE 