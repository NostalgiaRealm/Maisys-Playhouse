
/* ==== __break @ 0040d63e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040d63e-0040d63e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


