#!/bin/bash
dune exec psRB -- -i "$1"
python3 python/psRB.py -e "$1"