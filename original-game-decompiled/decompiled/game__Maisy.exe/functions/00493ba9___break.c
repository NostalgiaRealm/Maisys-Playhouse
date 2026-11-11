
/* ==== __break @ 00493ba9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493ba9-00493ba9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


