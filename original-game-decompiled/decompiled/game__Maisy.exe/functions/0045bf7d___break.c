
/* ==== __break @ 0045bf7d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bf7d-0045bf7d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


