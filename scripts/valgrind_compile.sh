#!/bin/bash

valgrind --leak-check=full --show-leak-kinds=all --log-file=vlog.txt --track-origins=yes -v $1 && tail vlog.txt