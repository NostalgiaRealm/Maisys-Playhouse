
/* ==== __break @ 0041110d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041110d-0041110d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


