
/* ==== __break @ 0044deee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044deee-0044deee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


