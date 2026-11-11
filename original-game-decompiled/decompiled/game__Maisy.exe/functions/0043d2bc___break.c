
/* ==== __break @ 0043d2bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043d2bc-0043d2bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


