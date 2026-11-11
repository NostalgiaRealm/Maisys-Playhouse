
/* ==== __break @ 00448ed5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448ed5-00448ed5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


