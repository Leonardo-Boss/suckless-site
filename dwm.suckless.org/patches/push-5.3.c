static Client *
prevtiled(Client *c) {
   Client *p, *r;

   for (p = clients, r = NULL; p && p != c; p = p->next)
      if (!p->isfloating && ISVISIBLE(p))
         r = p;
   return r;
}

static void
pushup(const Arg *arg) {
   Client *c;

   if (!sel || sel->isfloating)
      return;
   if ((c = prevtiled(sel))) {
      /* attach before c */
      detach(sel);
      sel->next = c;
      if (clients == c)
         clients = sel;
      else {
         for (c = clients; c->next != sel->next; c = c->next);
         c->next = sel;
      }
   } else {
      /* move to the end */
      for (c = sel; c->next; c = c->next);
      detach(sel);
      sel->next = NULL;
      c->next = sel;
   }
   focus(sel);
   arrange();
}

static void
pushdown(const Arg *arg) {
   Client *c;

   if (!sel || sel->isfloating)
      return;
   if ((c = nexttiled(sel->next))) {
      /* attach after c */
      detach(sel);
      sel->next = c->next;
      c->next = sel;
   } else {
      /* move to the front */
      detach(sel);
      attach(sel);
   }
   focus(sel);
   arrange();
}
