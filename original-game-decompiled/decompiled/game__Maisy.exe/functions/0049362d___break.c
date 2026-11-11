
/* ==== __break @ 0049362d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049362d-0049362d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


