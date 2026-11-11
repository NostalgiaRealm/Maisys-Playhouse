
/* ==== __break @ 1401e399 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e399-1401e399
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


