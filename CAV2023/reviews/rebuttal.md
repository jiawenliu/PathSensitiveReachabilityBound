We thank the reviewers for their detailed and careful comments. We will use them to improve our paper.

The necessitates of reasoning the path-sensitivity empirically
-------------------------------

Identified some situations, for example,
In the smart contract context, precisely estimate the gas consumption is crucial to deploy the contract, send transition and identify the DoS attack. 
By the paper in \cite{}, there are 30% of the smart contract have if-control in the loop. Paper~\cite{} also identified program patterns where the if-control in the loop can cause problems. 

We identified some loop patterns where the reachability of one branch in an if-control is only 1 while the other branch is significantly large. 
In the smart contract context, every operation consumes different amount of gas (or more generally the context where operations on different branches consumes different type of resources).
 <!-- (this is true in the smart contract where every operation consumes different amount of gas) analysis without reasoning the path-sensitivity gives problem. -->
A resource cost analysis without reasoning the path-sensitivity could
over-approximate the gas consumption largely.
In this sense, the sender much pay a lot of money in order to send a transition, or even choose do not deploy the contract.
An adversary could manipulate the input data that iterating only the branch that consume bigger gas. 
<!-- , will make the contract unable to deploy. -->

We also identified loop patterns in the unbounded programs, 
such that the visiting times of the points in one branch of an if-control are still bounded. 


The advance in this paper compared to Gulwani et al.
-------------------------------



Ranking functions and upper bound invariant computation
-------------------------------




Writing issues
-------------------------------

We thank for these comments and we will these them to improve the paper.