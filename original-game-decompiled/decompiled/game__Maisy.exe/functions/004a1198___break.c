
/* ==== __break @ 004a1198 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a1198-004a1198
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


