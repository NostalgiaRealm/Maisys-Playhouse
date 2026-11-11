
/* ==== __break @ 00459f5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00459f5f-00459f5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


