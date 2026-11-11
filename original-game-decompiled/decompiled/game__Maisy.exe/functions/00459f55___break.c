
/* ==== __break @ 00459f55 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00459f55-00459f55
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


