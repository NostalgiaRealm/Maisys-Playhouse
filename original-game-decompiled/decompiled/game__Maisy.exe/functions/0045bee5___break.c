
/* ==== __break @ 0045bee5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bee5-0045bee5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


