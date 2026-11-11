
/* ==== __break @ 1400d51c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d51c-1400d51c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


