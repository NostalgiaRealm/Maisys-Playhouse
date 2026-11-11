
/* ==== __break @ 00410f7e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410f7e-00410f7e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


