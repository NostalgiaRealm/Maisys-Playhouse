
/* ==== __break @ 004370fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004370fb-004370fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


