
/* ==== __break @ 0043c8cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c8cc-0043c8cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


