
/* ==== __break @ 0045133f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045133f-0045133f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


