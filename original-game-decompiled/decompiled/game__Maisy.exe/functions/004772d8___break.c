
/* ==== __break @ 004772d8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004772d8-004772d8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


