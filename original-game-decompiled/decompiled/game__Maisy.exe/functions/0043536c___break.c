
/* ==== __break @ 0043536c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043536c-0043536c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


