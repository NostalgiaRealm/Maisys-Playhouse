
/* ==== __break @ 0041390c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041390c-0041390c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


