
/* ==== __break @ 0043ed14 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ed14-0043ed14
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


