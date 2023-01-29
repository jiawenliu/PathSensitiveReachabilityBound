#!/bin/bash
for f in $1/*.br; do
    # sh ./psRB.sh $f
    dune exec adaptDune -- -i $f
    # python3 python/runner.py -e $f
done