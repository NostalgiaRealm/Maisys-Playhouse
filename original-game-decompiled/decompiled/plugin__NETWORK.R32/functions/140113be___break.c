
/* ==== __break @ 140113be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140113be-140113be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


