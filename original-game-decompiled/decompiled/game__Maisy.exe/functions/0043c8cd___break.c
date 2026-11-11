
/* ==== __break @ 0043c8cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c8cd-0043c8cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


