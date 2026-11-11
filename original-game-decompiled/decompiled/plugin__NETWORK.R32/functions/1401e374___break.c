
/* ==== __break @ 1401e374 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e374-1401e374
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


