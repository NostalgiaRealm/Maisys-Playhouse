
/* ==== __break @ 140188fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140188fb-140188fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


