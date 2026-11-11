
/* ==== __break @ 140213ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140213ef-140213ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


