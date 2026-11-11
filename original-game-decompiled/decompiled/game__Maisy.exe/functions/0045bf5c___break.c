
/* ==== __break @ 0045bf5c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bf5c-0045bf5c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


