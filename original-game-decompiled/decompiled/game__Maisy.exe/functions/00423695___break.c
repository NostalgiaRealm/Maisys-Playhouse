
/* ==== __break @ 00423695 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00423695-00423695
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


