
/* ==== __break @ 0049f5fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049f5fb-0049f5fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


