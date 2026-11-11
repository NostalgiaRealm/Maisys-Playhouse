
/* ==== __break @ 0043176a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043176a-0043176a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


