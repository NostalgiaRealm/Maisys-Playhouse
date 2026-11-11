
/* ==== __break @ 0043c221 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c221-0043c221
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


