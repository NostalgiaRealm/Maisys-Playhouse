
/* ==== __break @ 0042fc9b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0042fc9b-0042fc9b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


