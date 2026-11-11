
/* ==== __break @ 0043c21c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c21c-0043c21c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


