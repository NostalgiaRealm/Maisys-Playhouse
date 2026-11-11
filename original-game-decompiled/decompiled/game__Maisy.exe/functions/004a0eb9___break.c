
/* ==== __break @ 004a0eb9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a0eb9-004a0eb9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


