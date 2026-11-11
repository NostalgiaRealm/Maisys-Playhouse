
/* ==== __break @ 00487a65 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00487a65-00487a65
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


