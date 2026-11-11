
/* ==== __break @ 0044ce56 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ce56-0044ce56
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


