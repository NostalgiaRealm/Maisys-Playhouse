
/* ==== __break @ 0044da5d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044da5d-0044da5d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


