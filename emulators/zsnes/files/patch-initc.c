--- initc.c.orig	2020-08-28 17:31:26 UTC
+++ initc.c
@@ -1495,7 +1495,7 @@ Would be nice to trash this section in the future
 extern unsigned char ENVDisable, cycpb268, cycpb358, cycpbl2, cycpblt2, cycpbl;
 extern unsigned char cycpblt, opexec268, opexec358, opexec268b, opexec358b;
 extern unsigned char opexec268cph, opexec358cph, opexec268cphb, opexec358cphb;
-bool HacksDisable;
+extern bool HacksDisable;
 
 void headerhack()
 {
