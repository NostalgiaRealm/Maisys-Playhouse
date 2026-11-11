
/* ==== __break @ 004a0f8f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a0f8f-004a0f8f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


