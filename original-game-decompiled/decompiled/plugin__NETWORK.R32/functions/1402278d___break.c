
/* ==== __break @ 1402278d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402278d-1402278d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


