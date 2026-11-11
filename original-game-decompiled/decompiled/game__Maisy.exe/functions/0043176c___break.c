
/* ==== __break @ 0043176c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043176c-0043176c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


