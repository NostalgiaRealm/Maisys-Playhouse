
/* ==== __break @ 1401e51d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e51d-1401e51d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


