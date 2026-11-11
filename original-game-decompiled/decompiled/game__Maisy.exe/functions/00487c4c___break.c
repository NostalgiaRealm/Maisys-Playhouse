
/* ==== __break @ 00487c4c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00487c4c-00487c4c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


