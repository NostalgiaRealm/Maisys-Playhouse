
/* ==== __break @ 0044e32e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e32e-0044e32e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


