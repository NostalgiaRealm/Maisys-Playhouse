
/* ==== __break @ 0049aedc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049aedc-0049aedc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


