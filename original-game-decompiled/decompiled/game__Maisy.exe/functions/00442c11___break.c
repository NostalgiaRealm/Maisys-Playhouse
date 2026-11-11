
/* ==== __break @ 00442c11 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c11-00442c11
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


