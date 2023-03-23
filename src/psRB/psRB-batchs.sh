#!/bin/bash
for f in $1/*.br; do
    # sh ./psRB.sh $f
    dune exec psRB -- -i "$f"
    # python3 python/runner.py -e $f
done