
/* ==== __break @ 00487c4a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00487c4a-00487c4a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


