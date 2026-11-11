
/* ==== __break @ 00481c4a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481c4a-00481c4a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


