
/* ==== __break @ 004178cd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178cd-004178cd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


