
/* ==== __break @ 0044ad9e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044ad9e-0044ad9e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


