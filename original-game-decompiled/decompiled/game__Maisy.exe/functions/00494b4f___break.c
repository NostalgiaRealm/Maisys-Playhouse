
/* ==== __break @ 00494b4f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494b4f-00494b4f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


