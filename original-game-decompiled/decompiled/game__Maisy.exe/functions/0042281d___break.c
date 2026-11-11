
/* ==== __break @ 0042281d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042281d-0042281d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


