
/* ==== __break @ 004511df ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004511df-004511df
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


