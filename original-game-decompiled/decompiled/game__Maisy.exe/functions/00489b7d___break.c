
/* ==== __break @ 00489b7d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489b7d-00489b7d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


