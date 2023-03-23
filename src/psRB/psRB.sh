#!/bin/bash
dune exec psRB -- -i "$1"
python3 python/runner.py -e "$1"