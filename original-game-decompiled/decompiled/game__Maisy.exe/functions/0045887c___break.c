
/* ==== __break @ 0045887c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045887c-0045887c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


