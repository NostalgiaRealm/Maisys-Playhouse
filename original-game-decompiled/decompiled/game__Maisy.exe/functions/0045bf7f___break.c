
/* ==== __break @ 0045bf7f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bf7f-0045bf7f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


