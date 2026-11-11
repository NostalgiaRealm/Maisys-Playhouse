
/* ==== __break @ 0044ce5a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ce5a-0044ce5a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


