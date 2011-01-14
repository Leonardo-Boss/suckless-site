Style guide of code hosted on suckless.org
==========================================
When it comes to code style questions, it is very likely that individual
programmers will disagree. It is absolutely fine to use an individual style for
individual projects, especially if only one developer is involved. However, if
there are two or more programmers involved in a project, guidelines become
handy in order to meet the first basic rule we follow:

* Code developed by different individuals should follow a common style among those to found a consistent base.

Thus consistency in the code style being used is more important than any
particular detail of the style itself. Due to the fact that most of the software of
suckless.org has been developed by more than one individual, some sort of
common style found in the code appeared during the past years. This common
style is described in detail, further on.

C++
---
C++ was used in the early beginning and has been abandoned for various reasons.

A summary of those reasons is: Nearly nobody understands C++ in all its
facettes and details. C++ has been designed and evolved to support any
programming language paradigm and feature invented by programming
language designers until the OO hype and beyond. This leads to mutual
exclusive programming paradigms and styles in one language and basically
destroys the simplicity and clarity of its ancestor C. The usual
workaround in the C++ world is to stick to certain C++ subsets, like only using
one calling convention, not using exceptions, not using STL but using libstdc++
etc.

It took quite a while for some of us to realize that C++ leads to more complex
software in general, because it provides the feature richness to do so. This is
especially dangerous if average programmers are involved in a project. In our
experience it is much more likely that a C++ project driven by average
programmers will fail, than a C project. The reason for this is simple: C++ is
hard to deal with when used in all its feature richness.

We don't argue that C++ software performs better or worse than software written
in C. However we argue that in general C++ software performs poorer than
software written in C, because of its tendency to complexity and its hidden
pitfalls like expensive function calls in loops or too many inlines.

All these problems do not happen with C, because C is too simple to be
misused in our opinion.

So the second rule of this style guide concludes:

* We use C as our primary programming language because it enforces clear and simple software.
