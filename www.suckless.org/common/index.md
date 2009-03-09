SUCK LESS PHILOSOPHY
====================

Our philosophy exemplified, dwm-1.0 vs dwm-5.1
----------------------------------------------
	@@ -1,17 +1,7 @@
	 void
	-tag(Arg *arg)
	-{
	-	unsigned int i;
	-
	-	if(!sel)
	-		return;
	-
	-	for(i = 0; i < ntags; i++)
	-		sel->tags[i] = False;
	-	sel->tags[arg->i] = True;
	-	settitle(sel);
	-	if(!isvisible(sel))
	-		arrange(NULL);
	-	else
	-		drawstatus();
	+tag(const Arg *arg) {
	+	if(sel && arg->ui & TAGMASK) {
	+		sel->tags = arg->ui & TAGMASK;
	+		arrange();
	+	}
	 }

Many (open source) hackers are proud if they achieve large amounts of code,
because they believe the more lines of code they've written, the more progress
they have made. The more progress they have made, the more skilled they are.
This is simply a delusion.

Most hackers actually don't care much about code quality. Thus, if they get
something working which seems to solve a problem, they stick with it. If this
kind of software development is applied to the same source code throughout its
entire life-cycle, we're left with large amounts of code, a totally screwed
code structure, and a flawed system design. This is because of a lack of
conceptual clarity and integrity in the development process.

Code complexity is the mother of bloated, hard to use, and totally inconsistent
software. With complex code, problems are solved in suboptimal ways, valuable
resources are endlessly tied up, performance slows to a halt, and
vulnerabilities become a commonplace. The only solution is to scrap the entire
project and rewrite it from scratch.

The bad news: quality rewrites rarely happen, because hackers are proud of
large amounts of code. They think they understand the complexity in the code,
thus there's no need to rewrite it. They think of themselves as masterminds,
understanding what others can never hope to grasp. To these types, complex
software is the ideal.

Ingenious ideas are simple. Ingenious software is simple. Simplicity is the
heart of the Unix philosophy. The more code lines you have removed, the more
progress you have made. As the number of lines of code in your software
shrinks, the more skilled you have become and the less your software sucks.
