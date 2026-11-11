
/* ==== __break @ 00481278 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481278-00481278
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


