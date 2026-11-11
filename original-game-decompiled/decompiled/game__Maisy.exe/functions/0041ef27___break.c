
/* ==== __break @ 0041ef27 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ef27-0041ef27
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


