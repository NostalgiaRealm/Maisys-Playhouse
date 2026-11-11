
/* ==== __break @ 0044a00e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a00e-0044a00e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


