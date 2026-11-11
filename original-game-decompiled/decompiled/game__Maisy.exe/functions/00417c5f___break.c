
/* ==== __break @ 00417c5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417c5f-00417c5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


