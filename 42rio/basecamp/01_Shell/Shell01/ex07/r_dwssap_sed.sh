#!/bin/sh
cat /etc/passwd | sed # 's/\(\b[A-Z]\)/\(\1\)/g'
