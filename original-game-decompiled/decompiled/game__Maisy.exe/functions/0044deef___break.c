
/* ==== __break @ 0044deef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044deef-0044deef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


