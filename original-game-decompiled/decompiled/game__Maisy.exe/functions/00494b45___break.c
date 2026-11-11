
/* ==== __break @ 00494b45 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494b45-00494b45
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


