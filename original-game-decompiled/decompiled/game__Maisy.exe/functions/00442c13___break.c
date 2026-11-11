
/* ==== __break @ 00442c13 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c13-00442c13
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


