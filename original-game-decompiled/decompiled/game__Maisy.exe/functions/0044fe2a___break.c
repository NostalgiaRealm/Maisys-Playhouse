
/* ==== __break @ 0044fe2a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044fe2a-0044fe2a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


