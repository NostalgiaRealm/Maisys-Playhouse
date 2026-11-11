
/* ==== __break @ 00487a6f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00487a6f-00487a6f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


