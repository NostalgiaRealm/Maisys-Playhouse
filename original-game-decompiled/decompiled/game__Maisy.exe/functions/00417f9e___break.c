
/* ==== __break @ 00417f9e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417f9e-00417f9e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


