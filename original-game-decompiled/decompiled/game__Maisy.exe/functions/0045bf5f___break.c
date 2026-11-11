
/* ==== __break @ 0045bf5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bf5f-0045bf5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


