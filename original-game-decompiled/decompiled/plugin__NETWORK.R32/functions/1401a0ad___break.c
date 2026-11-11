
/* ==== __break @ 1401a0ad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a0ad-1401a0ad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


