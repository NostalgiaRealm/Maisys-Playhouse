
/* ==== __break @ 004375ad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004375ad-004375ad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


