
/* ==== __break @ 1401c14a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401c14a-1401c14a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


