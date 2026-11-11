
/* ==== __break @ 1401122e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401122e-1401122e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


