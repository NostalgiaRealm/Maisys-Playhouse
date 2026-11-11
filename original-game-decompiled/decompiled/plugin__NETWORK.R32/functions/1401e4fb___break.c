
/* ==== __break @ 1401e4fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e4fb-1401e4fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


