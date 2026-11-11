
/* ==== __break @ 0040fc7e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fc7e-0040fc7e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


