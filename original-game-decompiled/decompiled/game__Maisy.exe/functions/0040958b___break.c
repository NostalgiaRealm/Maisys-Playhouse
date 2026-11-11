
/* ==== __break @ 0040958b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040958b-0040958b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


