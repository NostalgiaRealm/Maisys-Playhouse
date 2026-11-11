
/* ==== __break @ 0041167f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041167f-0041167f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


