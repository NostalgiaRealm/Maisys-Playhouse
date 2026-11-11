
/* ==== __break @ 004584cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004584cd-004584cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


