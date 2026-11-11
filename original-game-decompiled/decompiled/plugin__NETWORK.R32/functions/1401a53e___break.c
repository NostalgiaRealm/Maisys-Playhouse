
/* ==== __break @ 1401a53e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a53e-1401a53e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


