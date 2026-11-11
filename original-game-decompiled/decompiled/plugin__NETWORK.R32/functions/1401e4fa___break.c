
/* ==== __break @ 1401e4fa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e4fa-1401e4fa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


