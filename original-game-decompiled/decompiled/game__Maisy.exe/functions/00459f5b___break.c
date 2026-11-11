
/* ==== __break @ 00459f5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00459f5b-00459f5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


