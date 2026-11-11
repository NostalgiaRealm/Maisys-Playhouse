
/* ==== __break @ 004a0eb7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a0eb7-004a0eb7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


