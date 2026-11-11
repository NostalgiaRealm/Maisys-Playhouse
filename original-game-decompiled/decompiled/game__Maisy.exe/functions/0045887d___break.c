
/* ==== __break @ 0045887d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045887d-0045887d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


