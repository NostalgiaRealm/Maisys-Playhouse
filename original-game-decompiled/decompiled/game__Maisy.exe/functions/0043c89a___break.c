
/* ==== __break @ 0043c89a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c89a-0043c89a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


