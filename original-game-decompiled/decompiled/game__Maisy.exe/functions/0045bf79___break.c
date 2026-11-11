
/* ==== __break @ 0045bf79 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bf79-0045bf79
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


