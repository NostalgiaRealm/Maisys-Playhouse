
/* ==== __break @ 00459f59 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00459f59-00459f59
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


