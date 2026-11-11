
/* ==== __break @ 00481c2f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481c2f-00481c2f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


