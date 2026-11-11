
/* ==== __break @ 0042fc9f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042fc9f-0042fc9f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


