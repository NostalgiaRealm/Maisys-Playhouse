
/* ==== __break @ 0044ce55 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ce55-0044ce55
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


