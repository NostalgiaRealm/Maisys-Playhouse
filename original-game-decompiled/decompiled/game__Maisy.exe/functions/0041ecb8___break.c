
/* ==== __break @ 0041ecb8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ecb8-0041ecb8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


