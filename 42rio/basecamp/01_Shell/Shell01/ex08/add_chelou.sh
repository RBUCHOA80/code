#!/bin/sh
FT_NBR1=$(echo "FT_NBR1" | sed "s/'/0/g; s/\\\/l/g; s/\*/2/g; s/?/3/g; s/!/4/g")
FT_NBR2=$(echo "FT_NBR2" | sed "s/m/0/g; s/r/l/g; s/d/2/g; s/0/3/g; s/c/4/g")

echo "ibase=5; obase=D;" $FT_NBR1 + $FT_NBR2 | bc | tr "0123456789ABC" "gtaio luSnemf"
