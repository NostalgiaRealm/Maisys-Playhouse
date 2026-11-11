
/* ==== __break @ 00417f9f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417f9f-00417f9f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


