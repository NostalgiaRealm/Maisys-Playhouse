
/* ==== __break @ 00493d0d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493d0d-00493d0d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


