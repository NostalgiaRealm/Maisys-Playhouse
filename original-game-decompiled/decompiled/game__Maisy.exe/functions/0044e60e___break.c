
/* ==== __break @ 0044e60e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e60e-0044e60e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


