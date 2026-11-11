
/* ==== __break @ 00417f8d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417f8d-00417f8d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


