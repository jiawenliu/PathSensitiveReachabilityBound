We thank the reviewers for their detailed and careful comments. We will use them to improve our paper.

The necessitates of reasoning the path-sensitivity empirically
-------------------------------

There are some situations where reasoning the path-sensitivity is important.
For example,
in the smart contract context, precisely estimate the gas consumption is crucial to deploy the contract, send transition and identify the DoS attack. 
By the paper \cite{Demystifying Loops in Smart Contracts. ASE 2020}, there are 30% of the smart contract have if-control in the loop. Paper~\cite{Smart Contracts Refinement for Gas Optimization. BRAINS 2021} and \cite{Under-optimized smart contracts devour your money. SANER 201}, and \cite{Characterizing Efficiency Optimizations in Solidity Smart Contracts}
also identified program patterns where the if-control in the loop can cause gas wasting and paper \cite{MadMax: Surviving Out-of-Gas Conditions in Ethereum Smart Contracts} shows that the existence of the gas wasting can cause the DoS attack.
In these programs, we find some loop patterns where the reachability of one branch in an if-control is only 1 while the other branch is significantly large. 
In this context, every operation consumes different amount of gas (or generally any context where operations on different branches consumes different type of resources).
A resource cost analysis without reasoning the path-sensitivity could
over-approximate the gas consumption largely.
In this sense, the sender must pay a lot of money in order to execute a transition, or even prefer not to deploy a contract.
An adversary could manipulate the input data that iterating only the branch that consume bigger gas and trigger a DoS attack.
<!-- , will make the contract unable to deploy. -->
We also identified the loop pattern in the unbounded programs, 
such that the visiting times of the points in one branch of an if-control are still bounded. 
This pattern is very common in the concurrency system waiting for the lock.


The advance in this paper compared to Gulwani et al.
-------------------------------



Ranking functions and upper bound invariant computation
-------------------------------




Writing issues
-------------------------------

We thank for all these detailed comments on the presentation and writing, and we will apply them to modify the paper.