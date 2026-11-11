
/* ==== __break @ 004695fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695fb-004695fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


