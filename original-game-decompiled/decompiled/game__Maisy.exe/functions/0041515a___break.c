
/* ==== __break @ 0041515a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041515a-0041515a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


