# Expectations on Brbo's input programs

## Syntactic restriction on input programs

1. Input program must conform to the following grammar:
    ```
    s ::= s;...;s | while(e) s | if(e) s else s | do s while(e) | for(s; e; s) s
        | continue | break | assert(e) | return e | T x | r = r + e
        | assume(e) | reach(e, e,...,e) | ndInt() | ndBool()
        | T x = y.f | T x = e | x = e | e
    e ::= x | x.m(e,...,e) | e ⋈ e | -e | !e
        | new List | new Map | new Set
    ⋈ ::= + | - | * | <= | < | == | != | > | >=
    T ::= Int | Bool | Object
    Object ::= List | Map | Set | Iterator | ...
    ```
    Additionally, updates to resources must be in the form of `r = r + e`
3. Each variable's name must be globally unique such that we can easily transform the program by declaring all variables at the entry

## Syntax-directed numeric abstraction

### API translation

During numeric abstraction, any APIs not listed below are modeled as pure and returning a non-deterministic integer

1. java.util.List: add
1. java.util.Map: put, get, entrySet.iterator
1. java.util.Set: add
1. java.util.Collection: addAll, size, clear, iterator
1. java.util.Iterator: next, hasNext
1. java.lang.String: length

### Numeric program

The generated numeric programs conform to the following grammar:

```
s ::= s;...;s | while(e) s | if(e) s else s | do s while(e) | for(s; e; s) s | label: s
    | continue | break | assert(e) | return e | T x | R = R + e
    | assume(e) | ndInt() | ndBool()
    | T x = e | x = e
e ::= x | e ⋈ e | -e | !e
⋈ ::= + | - | * | <= | < | == | != | > | >=
T ::= Int | Bool
```