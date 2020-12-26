# Algorithms

**Algorithm** solves a specific problem; it's predictable and reproducible. **Heuristic** gives a quick and efficient solution, but provides no guarantee of correctness.

Good algorithm is:
- correct,
- efficient,
- simple, easy to implement.

## Correctness of an algorithm.

We need a **proof** to demonstrate the correctness of the algorithm.

- **Counterexample** is the case in which an algorithm shows an unexpected output and, thus, is incorrect.
- **Mathematical induction** is a good method to find whether or not an algorithm is correct:
    - Check if true for basis,
    - Assume it's true up to n,
    - Show it's true for n+1 and, thus, in general.
- **Contradiction** is an alternative method to induction:
    - Assume the premise is invalid,
    - Develop some logical consequences,
    - Show that one consequence is demonstrably false, and that the premise is, thus, valid.

## Modeling the problem.

Depending on the problem different structures may be used for modeling:
- **Permutations** for an “arrangement,” “tour,” “ordering,” or “sequence.”
- **Subsets** for a “cluster,” “collection,” “committee,” “group,” “packaging,” or “selection.”
- **Trees** for a “hierarchy,” “dominance relationship,” “ancestor/descendant relationship,” or “taxonomy.”
- **Graphs** for a “network,” “circuit,” “web,” or “relationship.”
- **Points** for “sites,” “positions,” “data records,” or “locations.”
- **Polygons** for “shapes,” “regions,” “configurations,” or “boundaries.”
- **Strings** for a “text,” “characters,” “patterns,” or “labels.”

## Sources

A lot of information in this repo is based on or compiled from the sources:

* Aditya Y. Bhargava - Grokking algorithms (2016)

* Robert Sedgewick, Kevin Wayne - Algorithms-Addison-Wesley Professional (2011)

* Steven S. Skiena - The Algorithm Design Manual-Springer (2020)
