
/* ==== __break @ 00487c49 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00487c49-00487c49
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


