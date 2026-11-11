
/* ==== __break @ 0040f06c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040f06c-0040f06c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


