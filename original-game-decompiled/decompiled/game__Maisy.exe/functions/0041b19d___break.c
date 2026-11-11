
/* ==== __break @ 0041b19d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041b19d-0041b19d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


