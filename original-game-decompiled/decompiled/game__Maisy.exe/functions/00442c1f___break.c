
/* ==== __break @ 00442c1f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442c1f-00442c1f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


