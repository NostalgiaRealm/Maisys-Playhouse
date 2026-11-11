
/* ==== __break @ 004a094e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a094e-004a094e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


