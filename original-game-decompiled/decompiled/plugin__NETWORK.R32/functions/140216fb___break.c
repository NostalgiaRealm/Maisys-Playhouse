
/* ==== __break @ 140216fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140216fb-140216fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


