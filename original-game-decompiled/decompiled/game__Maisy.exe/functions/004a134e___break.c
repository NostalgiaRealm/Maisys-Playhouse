
/* ==== __break @ 004a134e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a134e-004a134e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


