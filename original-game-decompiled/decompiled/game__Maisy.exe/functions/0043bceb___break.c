
/* ==== __break @ 0043bceb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bceb-0043bceb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


