
/* ==== __break @ 0044808d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044808d-0044808d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


