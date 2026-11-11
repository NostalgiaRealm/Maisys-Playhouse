
/* ==== __break @ 1401a76d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a76d-1401a76d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


