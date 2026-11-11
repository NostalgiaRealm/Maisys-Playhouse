
/* ==== __break @ 0044ce67 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ce67-0044ce67
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


