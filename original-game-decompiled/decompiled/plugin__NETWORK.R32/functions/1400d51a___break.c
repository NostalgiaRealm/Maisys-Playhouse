
/* ==== __break @ 1400d51a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d51a-1400d51a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


