
/* ==== __break @ 00423698 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00423698-00423698
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


