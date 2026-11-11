
/* ==== __break @ 0043baab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043baab-0043baab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


