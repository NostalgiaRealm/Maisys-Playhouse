
/* ==== __break @ 0040958c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040958c-0040958c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


