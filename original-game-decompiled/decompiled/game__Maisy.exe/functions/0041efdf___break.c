
/* ==== __break @ 0041efdf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041efdf-0041efdf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


