
/* ==== __break @ 0044d98a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044d98a-0044d98a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


