
/* ==== __break @ 14021aed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021aed-14021aed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


