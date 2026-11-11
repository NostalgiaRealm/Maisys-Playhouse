
/* ==== __break @ 140213ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140213ed-140213ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


