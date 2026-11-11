
/* ==== __break @ 0048993e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048993e-0048993e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


