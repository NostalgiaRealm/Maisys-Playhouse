
/* ==== __break @ 0044dd9a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044dd9a-0044dd9a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


