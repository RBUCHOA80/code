#!/bin/sh
YOUR_ACCESS_TOKEN="2ed818c27f2b8e2d8d8fca866a1b0b0eb671e3edd2674d8f159465f21ba861ce"

#FUNCTION="campus"
#FUNCTION="campus/28/users"
#FUNCTION="campus/28/users?page=2"
#FUNCTION="user/ruchoa"

SAVE="user_ruchoa.json"

curl  -H  "Authorization: Bearer $YOUR_ACCESS_TOKEN" "https://api.intra.42.fr/v2/$FUNCTION" > $SAVE
code ./$SAVE
