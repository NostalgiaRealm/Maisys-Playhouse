
/* ==== __break @ 0041214d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041214d-0041214d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


