
/* ==== __break @ 0041bcaf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041bcaf-0041bcaf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


