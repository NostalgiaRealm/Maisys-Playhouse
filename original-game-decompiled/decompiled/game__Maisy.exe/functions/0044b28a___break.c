
/* ==== __break @ 0044b28a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044b28a-0044b28a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


