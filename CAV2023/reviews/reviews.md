CAV'23 Paper #66 Reviews and Comments
===========================================================================
Paper #66 Path-sensitive Reachability-bound Analysis


Review #66A
===========================================================================

Overall merit
-------------
C. Weak paper, though I will not fight strongly against it

Reviewer expertise on the topic of the paper
--------------------------------------------
2. I know the topic reasonably well.

Paper summary
-------------
The paper proposes a method to computer
tight reachability-bounds, that is  the number of times a certain operation is executed. 

The main novelty is giving a solution for tight bounds in the presence of nested loops. The proposed  method combines amortized bound analysis through program abstraction and ranking function estimation and paths refinement.

Comments for authors
--------------------
The paper makes an important contribution on a hard problem. 

The motivation is clear, tight bounds are important for security, resource analysis, among others. 
Related work is discussed at length and complete as far as I am concerned. 

The topic fits perfect with CAV. 

The main insights is the usage of two quantities: path reachability-bound and loop reachability-bound. The path reachability-bound is an evaluation of loop-free unfolded paths in the program. Loop reachability-bounded bounds the number of iterations of an outer loop w.r.t. an inner loop, counting only the iterations when the inner loop is “entered”. 

The program is abstracted as a graph. The main idea is to compute a ranking function for each edge that would estimate how many times that edges is taken. 
To compute this, for every edge in the program, the authors start from a variable that decreases when the edge is taken. However I could not understand how they compute the actual edge bound. Definition 12 talks about an upper bound invariant for a ranking function. What is this invariant ? Does it talk about the reachability of the selected edge ? 
Unfortunately I could not follow section 9 and section 10 so I don't know how the path bounds are computed (sec 11 gives just a definition based on  definitions in sec 10). 

The main issue with the paper is readability. I could follow the first part of the paper up to def 12 roughly, even if notation wise the presentation is heavy. However I could not get how the paper computes bounds for edges, which is the crusts of the technical solution. 

I really liked the topic and the progress the paper makes but I cannot recommend it for acceptance since I do not understand the technicalities of the proposed solution, even if I got the main idea and I found it very nice.

Questions for authors’ response
-------------------------------
- How do you compute the ranking functions for an edge ? Can you give an intuition ?  
- What is an upper bound invariant ? 
- What happens if you have 3 nested loops ? Will you decompose them two by two ?



Review #66B
===========================================================================

Overall merit
-------------
B. OK paper, but I will not champion it

Reviewer expertise on the topic of the paper
--------------------------------------------
4. I have published work about this topic in recent years.

Paper summary
-------------
The reachability-bound analysis problem is to compute a bound on the number of times a program location is visited during program execution. This paper presents a new reachability-bound algorithm that distinguishes between the number of times a location is visited along a loop-free path and the number of times a loop is entered. The combination of the two bounds enables an overall reachability bound that is path-sensitive. The approach has been applied to several programs drawn from the literature and shows that the approach can compute different reachability bounds at different locations (in the same loop).

Comments for authors
--------------------
# Strengths

- The paper makes progress on an important problem. It presents in detail a path-sensitive reachability-bound algorithm, along with a proof of soundness. The key idea is to decompose the bound computation into component pieces: the bound on the number of entries for each loop and a bound of simple paths inside loops.

- The approach has been implemented and evaluated on several benchmark sets drawn for the literature.

# Weaknesses

- While the experimental evaluation provides evidence that the approach can compute different reachability bounds for different locations inside a loop, there is a lot there that is difficult to unpack. To evaluate the contribution, what I would like to understand better is to what extent is the path-sensitive reachability bound computation necessary to get a more precise overall bound. In how many cases, does the path-sensitivity reachability bound compute a more precise complexity bound? Or more precise constant factors? This is partially there in the "worst bound" columns (i.e., columns 10-14), but it seems to be clouded by imprecisions at one level contributing to the counts at the next level.

- The contribution of this paper is the combination of reachability-bound analysis and path refinement algorithm from Gulwani et al. [29]. The paper could be more specific on the contribution needed to adapt reachability-bound analysis in this context.

- The presentation of the algorithm is detailed but not particularly easy to follow. It took me a couple of readthroughs to realize that Section 8 offers a good overview of the approach. Perhaps this could be brought up earlier in the paper and made more prominent.

# Evaluation

This paper takes a step forward on the reachability-bound problem. It makes sense theoretically that there would be cases that require path-sensitive reasoning (as with other program reasoning problems). However, while I am weakly supportive, I would be more supportive if the paper could exhibit the size of the gap that necessitates path-sensitivity empirically.

# Minor

- References 1-8 are missing authors and other details.

Questions for authors’ response
-------------------------------
1. Could you comment further on the situations where path-sensitive reasoning was needed to get a more precise overall bound?

2. Could you comment further on the advance in this paper compared to Gulwani et al. [29]?



Review #66C
===========================================================================

Overall merit
-------------
C. Weak paper, though I will not fight strongly against it

Reviewer expertise on the topic of the paper
--------------------------------------------
2. I know the topic reasonably well.

Paper summary
-------------
Reachability bound analysis estimates the number of times that a given program location is visited when a program is executed. This problem was proposed by Gulwani et al. in 2010 and can be seen as a refinement of the amortized complexity analysis and loop bound analysis. The current approaches solve this problem in a path-insensitive way, that is, the same bound is assigned to all the locations in the same loop, and locations in different execution paths are not distinguished. This work aims going beyond the state of the art by proposing a path-sensitive approach for reachability bound analysis. 

The main contribution of this work is to propose a path-sensitive reachability bound algorithm by combining ranking functions from amortized program complexity analysis with path refinement from loop bound analysis. Moreover, the algorithm is implemented and validated by experiments. The experimental results show that more precise reachability bounds can be computed for program locations, compared with the state of the art bound analysis tools. 

The problem considered in this paper is interesting. The combination of ranking function and path refinement for reachability bound analysis is novel. My major concern for this work is about the writing. While this work includes a long appendix, the main text is in a chaotic state (see detailed comments below), which makes the understanding of the algorithm difficult.  I think the writing of this work is not ready for publication at present. 

Detailed comments. 
- Page 1, line -2, This result in -> This results in

- Page 3, section 2, line 2, to abstract program features and generates -> to abstract program features and generate

- Page 4, Figure 1. 
1) The program syntax is strange in the first sight, it should be mentioned that the syntax is given in Section 4. 
2) Figure 1(c) is mentioned in Step 2 of page 5, but there is no (c) in Figure 1. 
3) The syntax of the refined program in the bottom e.g. chs, rpt is defined in this paper. 

- Page 4, Challenge II. " However, for the locations between L_1 and L_4, the tight reachability-bounds are the product of the ineer and outer loop iteration bounds." I do not quite understand this sentence. For instance, the reachability bound for program location 3 should be no more than the number of iterations of the outer loop and has little to do with the number of iterations in the inner loop ?

- Page 5, the line -4 of Section 3, "which only show up once on tp_2 and tp_4" should be "which only show up once on tp_1, tp_2, and tp_4"

- Page 6, the paragraph before Definition 1. "And we also define the operator L_trace: mathcal{T}^{+infty}-> mathcal{P}(mathcal{L}) projects" ->  "And we also define the operator L_trace: mathcal{T}^{+infty}-> mathcal{P}(mathcal{L}) that projects"

- Page 6, Definition 1. the first l in the first line of the definition of cnt should be l', moreover, l = l should be l' = l.

- Page 7, title of Section 5, "Abstraction Transition Graph" -> "Abstract Transition Graph"

- Page 7, Definition 4, "denote by" is repeated. 

- Page 7, Definition 5, x' le y - v should be added ? since v ranges over N, the set of natural numbers. 

- Page 8, Definition 8, the vertices sequence -> the vertex sequence

- Page 8, Definition 9, the first item, "for every i = 0, ..., n and j = 0, ..., n-1" should be "for every i = 0, ..., n and j = 0, ..., i-1", the third item, l_0 should be l_n. 

- Page 9, The two paragraphs "Program Rewiting" and "Program Refinement" are impossible to understand without reading the reference [29]. For instance, the meaning of chs and rpt is not defined in this paper. 

- Page 10, Definition 10, the last line, it should be possible both hat{epsilon} = (l, x' le y-v, l')  and hat{epsilon} = (l, x' le y+v, l')  ?

- Page 10, Definition 11. SC(c), the font of SC should be mathcal. Moreover, I think the meaning of SCC(absG(c)) should be the union of nontrival SCCs of absG(c). (Nontrivial means that the SCC contains at least one edge).

- Page 10, Definition 12. 
1) What's the meaning of "interactively computed" ?
2) Since the definitions of VB and TB are mutually recursive, the definitions may induce just a system of equations. It seems for me that Definition 12 does not induce an algorithm to compute VB and TB. For instance, according to the definition, the ranking variable i is reset by n and k+m, and k is reset by i-m, then VB(i, c) = max(n, VB(k c) + m) and VB(k, c) = VB(i, c) - m. These two equations implies VB(i,c) = VB(k, c) + m and n <= VB(i, c). Nevertheless, they do not induce explicit bounds on VB(i, c) and VB(k ,c). I do not understand how the symbolic value n is estimated for both i an k.
3) It is strange that a different definition, Definition 30, is presented in appendix for ranking function estimation. What is the relationship between Definition 12 and Definition 30 ?

- Section 8, 9, 10, 11 are not well organized. In particular, the titles of these 4 sections are quite similar and it is hard to get the relationship of these 4 sections. 

- Page 11, Definition 15. "f(rp_l, tp, c)(tau) greater or" -> "f(rp_l, tp, c)(tau) is greater than or". Moreover, enclosed(tp) should be enclosed(rp,tp), and this typo occurs in many different places later on.

- Page 12, Definition 17. "simple transition path in absG(c)" shoould be "simple transition path in rp"?

- Page 12, Rewrite is only presented in appendix and REFINE is from the reference [29]. Without these two algorithms, how we can understand the statement of Theorem 81 precisely ?

- Page 13, Definition 18, this definition is rather dense and hard to follow. 
For instance, in the definition rInit, I do not understand why to use argmax here, since the argument ranges over locations, while x is a variable ? Similarly for the definition of rNext.

- Page 13, Definition 19, there is also mutual recursion between BD and varGD, how these definitions can be turned into an algorithm ?