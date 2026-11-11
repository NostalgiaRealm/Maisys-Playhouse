
/* ==== __break @ 004178c9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178c9-004178c9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


