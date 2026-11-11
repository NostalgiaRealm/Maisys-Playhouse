
/* ==== __break @ 00417f8e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417f8e-00417f8e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


