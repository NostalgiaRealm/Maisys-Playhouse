
/* ==== __break @ 0040854d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040854d-0040854d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


