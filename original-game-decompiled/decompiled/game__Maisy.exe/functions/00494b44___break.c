
/* ==== __break @ 00494b44 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00494b44-00494b44
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


