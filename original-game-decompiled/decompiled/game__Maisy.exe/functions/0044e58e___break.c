
/* ==== __break @ 0044e58e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e58e-0044e58e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


