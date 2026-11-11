
/* ==== __break @ 1402064e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402064e-1402064e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


