
/* ==== __break @ 004772d9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004772d9-004772d9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


