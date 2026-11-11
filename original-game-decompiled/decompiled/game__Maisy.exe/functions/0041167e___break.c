
/* ==== __break @ 0041167e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041167e-0041167e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


