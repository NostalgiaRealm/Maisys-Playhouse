
/* ==== __break @ 1401e51e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e51e-1401e51e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


