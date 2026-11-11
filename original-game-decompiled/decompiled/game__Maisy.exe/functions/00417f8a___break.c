
/* ==== __break @ 00417f8a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417f8a-00417f8a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


