
/* ==== __break @ 00487a6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00487a6b-00487a6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


