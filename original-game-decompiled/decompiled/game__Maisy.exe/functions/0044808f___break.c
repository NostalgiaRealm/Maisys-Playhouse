
/* ==== __break @ 0044808f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044808f-0044808f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


