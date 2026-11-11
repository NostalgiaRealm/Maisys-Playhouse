
/* ==== __break @ 0045887f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045887f-0045887f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


