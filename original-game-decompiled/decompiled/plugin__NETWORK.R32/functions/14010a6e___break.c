
/* ==== __break @ 14010a6e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a6e-14010a6e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


