
/* ==== __break @ 1400d51b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1400d51b-1400d51b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


