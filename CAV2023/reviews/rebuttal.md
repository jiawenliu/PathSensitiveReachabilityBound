We thank the reviewers for their detailed and careful comments. We will use them to improve our paper.


## Ranking functions and upper bound invariant computation.
-------------------------------
For every edge, if the ranking function of this edge computed at the previous step is a symbol, specifically an input variable, then this is already the upper bound invariant. 

If instead the ranking function of the edge is a variable 𝑦 which is not an input variable, this step will eliminate it and replace it with a symbolic expression. 
In order to do this, this steps will compute two quantities: first, it will recursively sum over the TB of all the edges whose constraint may increment the variable 𝑦, multiplying the corresponding increment; second, it will recursively compute the  upper bound invariant of all the other edges whose difference constraint may reset the variable 𝑦 and take the maximum value. The sum of these two quantities provides the symbolic expression that is an upper bound invariant on the maximum value of this ranking function. To compute these two quantities we use two mutually recursive procedures.

If a ranking function is increased in an edge of its nested loop, then this mutual recursion is non-terminating. In this case, we identify a cycle and produce infinity as the bound.


In the walk through example, $i$ is reset by $k+m$ and $k$ is reset by $i - m$.
We use the method in Definition 30 in appendix to compute a variable reset graph.
Then we use the variable renaming method to unify the variable name of $k$ and $i$ into a same new variable $z$.
Then this new variable $z$ is the ranking function of all edges where $k$ and $i$ were, and $z$ is only reset on the edge $0 \to 1$ by input variable $n$. $VB(n) = n$ because it is input variable.
So we compute the upper bound invariant for $z$ is $n$, and
the upper bound invariant for both $i$ and $k$ is $n$ as well.

## Three or more nested loops
-------------------------------
When there are multiple nested loops, we compute for a simple transition path its loop reachability-bound w.r.t. every level of outer loop.

For example, if $p$ is in the loop $l_0$ and it has two outer loops $l_1$ and $l_2$,
we compute two loop reachability-bounds.
$(tp, l_1)$ and $loopRB(tp, l_2)$.
We compute $lpinit(l_2, tp)$, $lpnext(l_2, tp)$ and $rFinal(tp)$ for $loopRB(tp, l_2)$ and
$lpinit(l_1, tp)$, $lpnext(l_1, tp)$ and $rFinal(tp)$ for $loopRB(tp, l_1)$ respectively.



## The necessitates of reasoning the path-sensitivity empirically
-------------------------------

There are some situations where reasoning the path-sensitivity is important.
For example,
in the smart contract context, precisely estimate the gas consumption is crucial to deploy the contract, send transition and identify the DoS attack. 
By the paper ``Demystifying Loops in Smart Contracts. ASE 2020``, there are 30% of the smart contract have if-control in the loop. Paper ``Smart Contracts Refinement for Gas Optimization. BRAINS 2021``, ``Under-optimized smart contracts devour your money. SANER 201``, and ``Characterizing Efficiency Optimizations in Solidity Smart Contracts``
also identified program patterns where the if-control in the loop can cause gas wasting and paper ``MadMax: Surviving Out-of-Gas Conditions in Ethereum Smart Contracts`` shows that the existence of the gas wasting can cause the DoS attack.
In these programs, we find some loop patterns where the reachability of one branch in an if-control is only 1 while the other branch is significantly large. 
Since every operation consumes different amount of gas (or generally in any context where operations on different branches consumes different type of resources).
A resource cost analysis without reasoning the path-sensitivity could
over-approximate the gas consumption largely.
In this sense, the sender must pay a lot of money in order to execute a transition, or even prefer not to deploy a contract.
An adversary could manipulate the input data that iterating only the branch that consume bigger gas and trigger a DoS attack.
We also identified the loop pattern in the unbounded programs, 
such that the visiting times of the points in one branch of an if-control are still bounded. 
This pattern is common in the concurrency system where an operation is locked and waiting for the signal of the other operation. 


## The advance in this paper compared to Gulwani et al.[29]
-------------------------------
We decompose the computation of reachablity-bound into the path reachability-bound and the loop reachability-bound.
The loop reachability-bound precisely compute w.r.t. the outer loop the times that the inner loop is ``reached''.
While the progress invariant method in Gulwani et al.[29] only compute the iteration of the inner loop w.r.t. one iteration of outer loop.



## Writing issues
-------------------------------

We appreciate for all these patiently, detailed and helpful comments on the presentation and writing, and we will apply them to modify the paper.