
/* ==== __break @ 0043c21f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c21f-0043c21f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


