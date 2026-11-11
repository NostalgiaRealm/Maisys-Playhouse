
/* ==== __break @ 00442c21 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c21-00442c21
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


