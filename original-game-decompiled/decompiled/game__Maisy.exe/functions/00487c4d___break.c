
/* ==== __break @ 00487c4d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00487c4d-00487c4d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


