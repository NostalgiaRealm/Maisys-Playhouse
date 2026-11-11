
/* ==== __break @ 00493ba6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493ba6-00493ba6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


