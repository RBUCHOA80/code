#!/bin/sh
cat /etc/passwd | awk 'NR % 2 == 0 {print $1}'
