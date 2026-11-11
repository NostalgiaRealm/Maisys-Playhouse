
/* ==== __break @ 00493ba1 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493ba1-00493ba1
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


