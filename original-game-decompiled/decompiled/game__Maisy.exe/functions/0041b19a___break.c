
/* ==== __break @ 0041b19a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041b19a-0041b19a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


