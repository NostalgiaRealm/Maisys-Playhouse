
/* ==== __break @ 00487a6a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00487a6a-00487a6a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


