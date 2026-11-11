
/* ==== __break @ 00417f8f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417f8f-00417f8f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


