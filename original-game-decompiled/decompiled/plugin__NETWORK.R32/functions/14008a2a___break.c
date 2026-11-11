
/* ==== __break @ 14008a2a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008a2a-14008a2a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


