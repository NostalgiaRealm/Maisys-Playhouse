
/* ==== __break @ 0048127d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048127d-0048127d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


