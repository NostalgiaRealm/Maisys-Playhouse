
/* ==== __break @ 00494b49 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494b49-00494b49
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


