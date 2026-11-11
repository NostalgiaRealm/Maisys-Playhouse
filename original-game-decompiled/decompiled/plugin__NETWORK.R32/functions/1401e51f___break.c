
/* ==== __break @ 1401e51f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e51f-1401e51f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


