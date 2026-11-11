
/* ==== __break @ 00423697 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00423697-00423697
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


