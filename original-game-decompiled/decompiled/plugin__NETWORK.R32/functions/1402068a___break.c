
/* ==== __break @ 1402068a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1402068a-1402068a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


