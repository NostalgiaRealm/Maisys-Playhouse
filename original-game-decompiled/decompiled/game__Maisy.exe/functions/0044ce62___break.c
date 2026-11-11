
/* ==== __break @ 0044ce62 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ce62-0044ce62
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


