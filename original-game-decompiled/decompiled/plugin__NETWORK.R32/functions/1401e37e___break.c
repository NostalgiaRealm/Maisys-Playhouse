
/* ==== __break @ 1401e37e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e37e-1401e37e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


