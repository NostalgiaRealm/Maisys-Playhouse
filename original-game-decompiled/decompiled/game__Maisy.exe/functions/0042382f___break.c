
/* ==== __break @ 0042382f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042382f-0042382f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


