
/* ==== __break @ 00417f9b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417f9b-00417f9b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


