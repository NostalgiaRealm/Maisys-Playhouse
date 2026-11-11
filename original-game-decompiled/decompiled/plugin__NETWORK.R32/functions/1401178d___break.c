
/* ==== __break @ 1401178d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401178d-1401178d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


