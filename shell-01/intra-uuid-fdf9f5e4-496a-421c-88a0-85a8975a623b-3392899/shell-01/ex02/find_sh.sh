#!/bin/sh
find . -type f -name "*.sh" | sed -e 's/\.sh//g' | rev | cut -d "/" -f 1  | rev
