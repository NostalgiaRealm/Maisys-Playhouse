
/* ==== __break @ 0042ad58 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042ad58-0042ad58
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


