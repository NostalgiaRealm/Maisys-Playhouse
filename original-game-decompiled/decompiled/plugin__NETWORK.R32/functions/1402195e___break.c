
/* ==== __break @ 1402195e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402195e-1402195e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


