
/* ==== __break @ 0044bcaf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044bcaf-0044bcaf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


