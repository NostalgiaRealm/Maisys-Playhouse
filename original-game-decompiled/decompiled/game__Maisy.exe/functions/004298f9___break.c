
/* ==== __break @ 004298f9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004298f9-004298f9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


