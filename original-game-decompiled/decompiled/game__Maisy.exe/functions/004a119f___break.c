
/* ==== __break @ 004a119f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a119f-004a119f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


