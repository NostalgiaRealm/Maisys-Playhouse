
/* ==== __break @ 00493f3d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493f3d-00493f3d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


