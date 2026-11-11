
/* ==== __break @ 0041ef9d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ef9d-0041ef9d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


